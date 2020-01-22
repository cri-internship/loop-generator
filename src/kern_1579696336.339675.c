#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 420, 520, "ones");
	float **B = create_two_dim_float(370, 540, "ones");

	for (int a = 5; a < 368; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-1][a-3]-0.631;
	  
	    A[a][a][a]=A[a-3][a-5][a-3]+B[a][a];
	  
	    B[a][a]=0.103;
	    B[a+2][a+2]=0.543;
	  
	    A[a][a][a]=A[a][a][a]/B[a][a];
	    B[a][a]=A[a+5][a+4][a+1]+B[a][a];
	  
	    float var_a=A[a][a][a]/0.622;
	    float var_b=A[a+1][a+2][a]*0.454;
	}

    return 0;
}