#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(810, 50, 380, "zeros");
	double **E = create_two_dim_double(30, 290, "zeros");
	double **C = create_two_dim_double(940, 10, "zeros");
	double *B = create_one_dim_double(530, "zeros");
	double *A = create_one_dim_double(600, "zeros");

	for (int c = 0; c < 525; c++)
	  for (int b = 0; b < 525; b++)
	    for (int a = 0; a < 525; a++)
	    {
	      
	      B[a]=B[a+5]-C[a][b]+E[a][b]/A[a]*D[a][b][c];
	    }

    return 0;
}