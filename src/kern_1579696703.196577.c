#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(650, 380, 260, "ones");
	double **B = create_two_dim_double(230, 260, "ones");
	double *C = create_one_dim_double(420, "ones");

	for (int d = 1; d < 420; d++)
	  for (int c = 1; c < 420; c++)
	    for (int b = 1; b < 420; b++)
	      for (int a = 1; a < 420; a++)
	      {
	        
	       C[a]=B[a][b]*A[a][b][c];
	       C[a-1]=A[a][b][c];
	      }

    return 0;
}