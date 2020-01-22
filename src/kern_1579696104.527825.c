#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(300, "zeros");
	double **B = create_two_dim_double(610, 910, "zeros");
	double **D = create_two_dim_double(910, 120, "zeros");
	double **C = create_two_dim_double(940, 990, "zeros");
	double ***E = create_three_dim_double(880, 760, 110, "zeros");

	for (int d = 0; d < 110; d++)
	  for (int c = 0; c < 760; c++)
	    for (int b = 3; b < 880; b++)
	      for (int a = 3; a < 880; a++)
	      {
	        
	       E[a][b][c]=E[a-3][b][c]/0.879;
	      }

    return 0;
}