#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(50, 200, 60, "random");
	double **A = create_two_dim_double(190, 990, "random");
	double **C = create_two_dim_double(890, 20, "random");
	double *E = create_one_dim_double(830, "random");
	double **D = create_two_dim_double(940, 170, "random");

	for (int d = 0; d < 986; d++)
	  for (int c = 0; c < 189; c++)
	    for (int b = 0; b < 189; b++)
	      for (int a = 0; a < 189; a++)
	      {
	        
	       A[a][b]=A[a+1][b+4]-0.76;
	      }

    return 0;
}