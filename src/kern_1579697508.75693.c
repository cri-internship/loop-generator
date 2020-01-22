#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(810, 590, "ones");
	double *D = create_one_dim_double(100, "ones");
	double *B = create_one_dim_double(40, "ones");
	double **C = create_two_dim_double(500, 690, "ones");

	for (int c = 5; c < 590; c++)
	  for (int b = 4; b < 100; b++)
	    for (int a = 4; a < 100; a++)
	    {
	      
	      C[a][b]=C[a-2][b-5]+D[a]/0.348*A[a][b];
	      
	      D[a]=D[a-4]+C[a][b];
	      
	      A[a][b]=A[a+1][b]+B[a]-D[a];
	      
	      C[a][b]=C[a+2][b+2]/0.95;
	      
	      A[a][b]=0.579;
	      
	      A[a][b]=C[a][b]-0.825;
	      D[a]=C[a][b+2]/A[a][b]-D[a]+B[a];
	    }

    return 0;
}