#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(750, 90, "ones");
	double ***B = create_three_dim_double(110, 350, 200, "ones");

	for (int d = 0; d < 199; d++)
	  for (int c = 0; c < 349; c++)
	    for (int b = 0; b < 106; b++)
	      for (int a = 0; a < 106; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+1][c+1]+A[a][b];
	      }

    return 0;
}