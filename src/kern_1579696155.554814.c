#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(130, 490, "zeros");
	double ***C = create_three_dim_double(950, 300, 390, "zeros");
	double **B = create_two_dim_double(150, 860, "zeros");
	double **A = create_two_dim_double(60, 810, "zeros");

	for (int a = 5; a < 60; a++)
	{
	  
	    B[a][a]=B[a-4][a-5]*A[a][a];
	  
	    B[a][a]=B[a+4][a]-0.147;
	  
	    A[a][a]=0.097/C[a][a][a]*B[a][a];
	    A[a-4][a-3]=D[a][a]/C[a][a][a];
	  
	    B[a][a]=C[a][a][a]+A[a][a];
	    D[a][a]=C[a-2][a-5][a-3]+B[a][a];
	}

    return 0;
}