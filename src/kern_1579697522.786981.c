#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(940, "zeros");
	double **A = create_two_dim_double(970, 640, "zeros");
	double **D = create_two_dim_double(60, 750, "zeros");
	double *E = create_one_dim_double(960, "zeros");
	double *C = create_one_dim_double(320, "zeros");

	for (int a = 0; a < 56; a++)
	{
	  
	    A[a][a]=A[a+5][a+1]*E[a]/B[a]+C[a]-D[a][a];
	  
	    double var_a=B[a]*0.584;
	    double var_b=B[a+2]+0.137;
	  
	    A[a][a]=D[a][a]-A[a][a]*E[a]+C[a];
	    D[a][a]=D[a+4][a+3]/E[a]*C[a]+A[a][a]-B[a];
	}

    return 0;
}