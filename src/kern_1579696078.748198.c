#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(690, 180, 930, "zeros");
	float **A = create_two_dim_float(870, 950, "zeros");

	for (int a = 5; a < 686; a++)
	{
	  
	    A[a][a]=A[a+3][a+2]/0.919;
	  
	    B[a][a][a]=B[a+2][a+4][a+1]+0.516;
	  
	    B[a][a][a]=B[a+3][a+2][a+1]/A[a][a];
	  
	    A[a][a]=A[a+2][a+2]*0.82;
	  
	    B[a][a][a]=B[a+4][a][a+3]-A[a][a];
	  
	    float var_a=A[a][a]-0.699;
	    float var_b=A[a-5][a-2]-0.304;
	}

    return 0;
}