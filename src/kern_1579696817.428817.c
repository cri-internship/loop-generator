#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(130, 140, "random");
	double ***B = create_three_dim_double(20, 960, 320, "random");

	for (int d = 0; d < 319; d++)
	  for (int c = 0; c < 958; c++)
	    for (int b = 0; b < 18; b++)
	      for (int a = 0; a < 18; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+2][c+1]/A[a][b];
	      }

    return 0;
}