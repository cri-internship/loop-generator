#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(100, 490, 500, "zeros");
	float *B = create_one_dim_float(210, "zeros");

	for (int a = 5; a < 97; a++)
	{
	  
	    A[a][a][a]=A[a-5][a][a-4]/B[a];
	  
	    A[a][a][a]=A[a-2][a-3][a-2]+0.28;
	  
	    A[a][a][a]=A[a][a+3][a+2]+0.859;
	  
	    A[a][a][a]=A[a+1][a+1][a+1]*0.054;
	  
	    B[a]=B[a+2]-0.119;
	  
	    B[a]=A[a][a][a]+B[a];
	    A[a][a][a]=A[a+3][a+3][a+2]+0.028;
	  
	    float var_a=B[a]+0.36;
	    float var_b=B[a-1]*0.614;
	}

    return 0;
}