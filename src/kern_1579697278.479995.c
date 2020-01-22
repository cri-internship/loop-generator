#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(70, "random");
	float **B = create_two_dim_float(600, 570, "random");

	for (int a = 4; a < 67; a++)
	{
	  
	    B[a][a]=B[a-2][a-2]/A[a];
	  
	    A[a]=A[a-4]-0.785;
	  
	    B[a][a]=B[a+5][a+3]*A[a];
	  
	    A[a]=A[a+3]-0.812;
	  
	    float var_a=B[a][a]/0.413;
	    float var_b=B[a+4][a+5]+0.728;
	}

    return 0;
}