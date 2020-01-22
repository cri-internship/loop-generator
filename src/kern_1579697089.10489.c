#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "random");
	float **B = create_two_dim_float(420, 660, "random");

	for (int a = 4; a < 415; a++)
	{
	  
	    A[a]=B[a][a];
	    B[a][a]=A[a]-B[a][a];
	  
	    B[a][a]=B[a-2][a-3]-0.996;
	  
	    B[a][a]=B[a+4][a+5]-0.973;
	  
	    A[a]=B[a][a]/A[a];
	    B[a][a]=B[a+3][a+4]-A[a];
	  
	    float var_a=A[a]*0.523;
	    float var_b=A[a-4]*0.045;
	  
	    A[a]=B[a][a]+0.117;
	    A[a]=B[a-4][a-4]-0.674;
	  
	    float var_c=A[a]/0.974;
	    float var_d=A[a+3]-0.59;
	}

    return 0;
}