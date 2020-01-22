#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(90, 830, 50, "zeros");
	float *A = create_one_dim_float(600, "zeros");

	for (int a = 5; a < 90; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-1][a]+A[a];
	  
	    float var_a=B[a][a][a]+0.728;
	    float var_b=B[a-4][a][a]-0.08;
	  
	    float var_c=B[a][a][a]-0.327;
	    float var_d=B[a-5][a][a-1]+0.606;
	}

    return 0;
}