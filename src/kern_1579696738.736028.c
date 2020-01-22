#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(760, "zeros");
	double ***B = create_three_dim_double(530, 180, 780, "zeros");
	double **A = create_two_dim_double(810, 140, "zeros");

	for (int a = 4; a < 805; a++)
	{
	  
	    A[a][a]=A[a+3][a+5]/C[a]-B[a][a][a];
	  
	    C[a]=A[a][a]/C[a]-B[a][a][a];
	    A[a][a]=A[a][a-4]/0.192*B[a][a][a];
	}

    return 0;
}