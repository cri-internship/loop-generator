#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(950, 300, "random");
	double *D = create_one_dim_double(350, "random");
	double ***A = create_three_dim_double(100, 600, 860, "random");
	double *E = create_one_dim_double(700, "random");
	double *C = create_one_dim_double(800, "random");

	for (int d = 0; d < 860; d++)
	  for (int c = 2; c < 600; c++)
	    for (int b = 0; b < 100; b++)
	      for (int a = 0; a < 100; a++)
	      {
	        
	       A[a][b][c]=A[a][b-2][c]/0.293;
	      }

    return 0;
}