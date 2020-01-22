#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(220, "zeros");
	double **B = create_two_dim_double(450, 130, "zeros");
	double ***C = create_three_dim_double(760, 980, 1000, "zeros");

	for (int d = 4; d < 1000; d++)
	  for (int c = 5; c < 980; c++)
	    for (int b = 2; b < 220; b++)
	      for (int a = 2; a < 220; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-4]/B[a][b];
	        
	       C[a][b][c]=A[a]/C[a][b][c];
	       A[a]=B[a][b];
	      }

    return 0;
}