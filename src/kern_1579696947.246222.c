#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(90, "zeros");
	double *A = create_one_dim_double(640, "zeros");

	for (int a = 5; a < 86; a++)
	{
	  
	    B[a]=B[a-5]*0.743;
	  
	    B[a]=B[a+2]-0.293;
	  
	    A[a]=A[a+3]/0.655;
	  
	    A[a]=A[a+1]-0.852;
	  
	    A[a]=B[a]/A[a];
	    B[a]=B[a-2]+A[a];
	}

    return 0;
}