#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(610, 790, "random");
	double **B = create_two_dim_double(30, 570, "random");
	double *A = create_one_dim_double(90, "random");

	for (int c = 3; c < 570; c++)
	  for (int b = 1; b < 30; b++)
	    for (int a = 1; a < 30; a++)
	    {
	      
	      A[a]=0.994;
	      A[a]=B[a][b];
	      
	      C[a][b]=B[a][b]*A[a]/C[a][b];
	      B[a][b]=B[a-1][b-3]*A[a];
	    }

    return 0;
}