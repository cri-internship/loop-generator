#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(880, 760, "zeros");
	float *A = create_one_dim_float(980, "zeros");

	for (int a = 5; a < 880; a++)
	{
	  
	    A[a]=A[a-5]*0.867;
	  
	    B[a][a]=A[a];
	    B[a-4][a-3]=A[a];
	  
	    A[a]=0.484;
	  
	    B[a][a]=B[a][a]*A[a];
	    A[a]=B[a][a]*A[a];
	  
	    A[a]=A[a]*B[a][a];
	    B[a][a]=A[a-2]*B[a][a];
	}

    return 0;
}