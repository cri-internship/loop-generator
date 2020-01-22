#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(170, 180, 230, "ones");
	float **C = create_two_dim_float(330, 70, "ones");
	float *B = create_one_dim_float(550, "ones");

	for (int a = 5; a < 165; a++)
	{
	  
	    C[a][a]=C[a-2][a-5]*0.769;
	  
	    A[a][a][a]=A[a+4][a+5][a+5]-C[a][a]+B[a];
	  
	    A[a][a][a]=B[a];
	  
	    float var_a=C[a][a]/0.905;
	    float var_b=C[a-4][a]-0.434;
	  
	    B[a]=A[a][a][a]/B[a]+C[a][a];
	    C[a][a]=A[a-4][a-3][a-3]*B[a]+C[a][a];
	}

    return 0;
}