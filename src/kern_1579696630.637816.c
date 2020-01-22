#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(220, 590, 130, "ones");
	float **B = create_two_dim_float(600, 30, "ones");
	float ***C = create_three_dim_float(160, 50, 380, "ones");

	for (int a = 5; a < 160; a++)
	{
	  
	    B[a][a]=B[a-5][a]*0.655;
	  
	    A[a][a][a]=A[a-1][a-5][a]-0.833;
	  
	    A[a][a][a]=A[a-4][a-3][a-1]/0.142;
	  
	    C[a][a][a]=C[a-1][a-4][a-3]*0.355;
	  
	    A[a][a][a]=A[a-1][a-5][a-4]/0.889;
	  
	    float var_a=A[a][a][a]/0.31;
	    float var_b=A[a-2][a][a-3]-0.269;
	  
	    C[a][a][a]=A[a][a][a]+B[a][a];
	    A[a][a][a]=A[a][a-4][a-2]-C[a][a][a]*B[a][a];
	}

    return 0;
}