#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(670, 350, 180, "ones");
	float *B = create_one_dim_float(480, "ones");
	float **C = create_two_dim_float(340, 510, "ones");

	for (int a = 4; a < 665; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-2][a]+B[a]/C[a][a];
	  
	    A[a][a][a]=0.422;
	  
	    B[a]=A[a][a][a]*C[a][a]+0.597;
	    A[a][a][a]=A[a-2][a-3][a-2]-0.752;
	  
	    float var_a=A[a][a][a]-0.292;
	    float var_b=A[a+4][a+5][a+5]*0.514;
	}

    return 0;
}