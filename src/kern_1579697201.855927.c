#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(80, 50, 800, "zeros");
	double **A = create_two_dim_double(100, 950, "zeros");

	for (int d = 2; d < 800; d++)
	  for (int c = 2; c < 50; c++)
	    for (int b = 4; b < 80; b++)
	      for (int a = 4; a < 80; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-2][c-2]-A[a][b];
	      }

    return 0;
}