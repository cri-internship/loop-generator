#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(780, 120, 130, "random");
	double *C = create_one_dim_double(730, "random");
	double ***D = create_three_dim_double(810, 730, 550, "random");
	double *A = create_one_dim_double(890, "random");

	for (int d = 0; d < 547; d++)
	  for (int c = 0; c < 730; c++)
	    for (int b = 0; b < 805; b++)
	      for (int a = 0; a < 805; a++)
	      {
	        
	       D[a][b][c]=C[a]*A[a]/B[a][b][c];
	       D[a+5][b][c+3]=C[a];
	      }

    return 0;
}