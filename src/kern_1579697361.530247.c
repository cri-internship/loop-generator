#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(670, 520, 760, "random");
	double *B = create_one_dim_double(340, "random");
	double **A = create_two_dim_double(840, 910, "random");

	for (int d = 0; d < 905; d++)
	  for (int c = 0; c < 338; c++)
	    for (int b = 0; b < 338; b++)
	      for (int a = 0; a < 338; a++)
	      {
	        
	       A[a][b]=A[a+3][b+5]/0.229;
	        
	       B[a]=B[a+2]*A[a][b]/C[a][b][c];
	      }

    return 0;
}