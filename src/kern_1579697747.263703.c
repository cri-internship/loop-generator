#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(950, 610, "random");
	float *A = create_one_dim_float(680, "random");

	for (int a = 5; a < 680; a++)
	{
	  
	    A[a]=A[a-5]/B[a][a];
	  
	    A[a]=A[a-4]/B[a][a];
	  
	    B[a][a]=B[a+5][a+4]/0.291;
	  
	    B[a][a]=B[a+2][a+1]*A[a];
	  
	    B[a][a]=B[a][a]-A[a];
	    A[a]=B[a-4][a]/A[a];
	}

    return 0;
}