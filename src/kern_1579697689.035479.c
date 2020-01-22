#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(840, 510, "zeros");
	double **C = create_two_dim_double(510, 40, "zeros");
	double **E = create_two_dim_double(80, 920, "zeros");
	double *B = create_one_dim_double(420, "zeros");
	double **D = create_two_dim_double(810, 500, "zeros");

	for (int c = 0; c < 500; c++)
	  for (int b = 2; b < 78; b++)
	    for (int a = 2; a < 78; a++)
	    {
	      
	      D[a][b]=D[a-1][b]*E[a][b]+A[a][b]/0.99-C[a][b];
	      
	      B[a]=B[a-2]-0.767;
	      
	      E[a][b]=E[a+2][b+4]+D[a][b]-0.978*B[a]/C[a][b];
	    }

    return 0;
}