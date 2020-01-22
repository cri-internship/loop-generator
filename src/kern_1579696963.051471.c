#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(720, "zeros");
	float **A = create_two_dim_float(440, 240, "zeros");
	float **C = create_two_dim_float(670, 730, "zeros");

	for (int a = 2; a < 436; a++)
	{
	  
	    A[a][a]=A[a+4][a+3]*B[a]-C[a][a];
	  
	    A[a][a]=A[a+3][a+1]/C[a][a];
	  
	    B[a]=B[a+5]*0.125;
	  
	    C[a][a]=C[a][a]+A[a][a];
	    A[a][a]=C[a+5][a+1]-0.078/B[a];
	}

    return 0;
}