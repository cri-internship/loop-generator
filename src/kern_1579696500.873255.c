#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(450, "zeros");
	float **B = create_two_dim_float(860, 860, "zeros");

	for (int a = 5; a < 447; a++)
	{
	  
	    B[a][a]=B[a-5][a-4]*0.426;
	  
	    B[a][a]=B[a][a+2]*A[a];
	  
	    B[a][a]=A[a]*B[a][a];
	    A[a]=A[a+3]-B[a][a];
	}

    return 0;
}