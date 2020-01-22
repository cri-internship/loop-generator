#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(670, 700, "zeros");
	double *D = create_one_dim_double(140, "zeros");
	double ***E = create_three_dim_double(870, 1000, 120, "zeros");
	double **C = create_two_dim_double(810, 450, "zeros");
	double *A = create_one_dim_double(350, "zeros");

	for (int d = 2; d < 120; d++)
	  for (int c = 4; c < 1000; c++)
	    for (int b = 5; b < 136; b++)
	      for (int a = 5; a < 136; a++)
	      {
	        
	       E[a][b][c]=E[a-5][b-4][c-2]-A[a]+B[a][b]/D[a];
	        
	       D[a]=0.097;
	       D[a+4]=E[a][b][c]-C[a][b]/A[a];
	      }

    return 0;
}