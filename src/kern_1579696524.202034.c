#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(740, "ones");
	double *A = create_one_dim_double(940, "ones");
	double *D = create_one_dim_double(290, "ones");
	double *C = create_one_dim_double(180, "ones");

	for (int a = 0; a < 179; a++)
	{
	  
	    C[a]=C[a]/D[a]-0.34+B[a];
	    D[a]=C[a+1]*B[a]-D[a]+A[a];
	}

    return 0;
}