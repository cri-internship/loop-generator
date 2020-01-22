#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(150, 840, "ones");
	double *B = create_one_dim_double(720, "ones");
	double *A = create_one_dim_double(170, "ones");

	for (int a = 3; a < 146; a++)
	{
	  
	    A[a]=A[a-3]/0.666;
	  
	    A[a]=A[a+2]*B[a]+C[a][a];
	  
	    C[a][a]=C[a+4][a]*0.803;
	  
	    C[a][a]=B[a]-A[a]+C[a][a];
	    A[a]=B[a+2]+A[a]/C[a][a];
	}

    return 0;
}