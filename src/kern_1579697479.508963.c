#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(290, 690, "zeros");
	float *B = create_one_dim_float(750, "zeros");
	float *C = create_one_dim_float(340, "zeros");

	for (int a = 0; a < 745; a++)
	{
	  
	    B[a]=B[a+5]*C[a]/A[a][a];
	  
	    B[a]=B[a+4]+C[a]*A[a][a];
	}

    return 0;
}