#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(840, "random");
	double ***C = create_three_dim_double(60, 740, 510, "random");
	double **B = create_two_dim_double(880, 460, "random");

	for (int d = 0; d < 510; d++)
	  for (int c = 2; c < 456; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       A[a]=A[a-4]*0.435;
	        
	       A[a]=A[a-2]-0.839;
	        
	       C[a][b][c]=C[a-4][b-2][c]+0.496;
	        
	       B[a][b]=B[a+1][b+1]/0.596;
	        
	       B[a][b]=C[a][b][c]+A[a];
	        
	       double var_a=A[a]/0.326;
	       double var_b=A[a-5]/0.085;
	      }

    return 0;
}