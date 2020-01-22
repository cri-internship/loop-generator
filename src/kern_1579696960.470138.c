#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(540, "ones");
	double *B = create_one_dim_double(90, "ones");
	double *A = create_one_dim_double(910, "ones");

	for (int a = 0; a < 538; a++)
	{
	  
	    A[a]=C[a]*A[a];
	    B[a]=C[a+2]+B[a];
	}

    return 0;
}