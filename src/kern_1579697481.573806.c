#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(310, 820, 80, "zeros");
	double **B = create_two_dim_double(830, 100, "zeros");

	for (int d = 1; d < 80; d++)
	  for (int c = 5; c < 820; c++)
	    for (int b = 0; b < 310; b++)
	      for (int a = 0; a < 310; a++)
	      {
	        
	       A[a][b][c]=0.561;
	       A[a][b-5][c-1]=B[a][b];
	      }

    return 0;
}