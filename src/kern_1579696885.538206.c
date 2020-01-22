#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(350, "ones");
	float ***B = create_three_dim_float(950, 250, 720, "ones");
	float **A = create_two_dim_float(790, 710, "ones");

	for (int a = 4; a < 350; a++)
	{
	  
	    C[a]=C[a-1]/A[a][a]*B[a][a][a];
	  
	    A[a][a]=A[a-3][a-4]/0.441;
	  
	    B[a][a][a]=B[a+4][a+2][a+1]+C[a];
	  
	    B[a][a][a]=B[a+3][a+3][a+5]/0.588;
	}

    return 0;
}