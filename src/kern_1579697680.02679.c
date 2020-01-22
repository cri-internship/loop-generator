#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(900, "zeros");
	double *A = create_one_dim_double(530, "zeros");

	for (int a = 0; a < 526; a++)
	{
	  
	    double var_a=A[a]*0.567;
	    A[a]=0.3;
	  
	    B[a]=0.406;
	    B[a+4]=0.492;
	  
	    A[a]=0.021;
	  
	    B[a]=A[a];
	  
	    B[a]=A[a]/0.43;
	    A[a]=A[a+2]-0.982;
	}

    return 0;
}