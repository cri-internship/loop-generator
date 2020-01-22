#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(600, 790, 110, "random");
	double **C = create_two_dim_double(950, 190, "random");
	double **B = create_two_dim_double(600, 320, "random");
	double **A = create_two_dim_double(10, 800, "random");
	double ***E = create_three_dim_double(870, 820, 930, "random");

	for (int d = 0; d < 317; d++)
	  for (int c = 0; c < 596; c++)
	    for (int b = 0; b < 596; b++)
	      for (int a = 0; a < 596; a++)
	      {
	        
	       B[a][b]=B[a+4][b+3]-A[a][b]*D[a][b][c]/C[a][b];
	      }

    return 0;
}