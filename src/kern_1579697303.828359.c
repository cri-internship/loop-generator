#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(750, "ones");
	double *B = create_one_dim_double(530, "ones");
	double *A = create_one_dim_double(110, "ones");

	for (int a = 4; a < 110; a++)
	{
	  
	    A[a]=C[a];
	    A[a]=A[a]-B[a];
	  
	    C[a]=0.913;
	    C[a-2]=A[a]*B[a];
	  
	    B[a]=C[a]/B[a];
	    C[a]=C[a-1]*A[a];
	  
	    double var_a=C[a]*0.363;
	    double var_b=C[a-4]*0.055;
	}

    return 0;
}