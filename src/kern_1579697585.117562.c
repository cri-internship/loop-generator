#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(840, 380, "random");
	double **C = create_two_dim_double(110, 320, "random");
	double ***A = create_three_dim_double(100, 580, 620, "random");
	double ***E = create_three_dim_double(990, 840, 800, "random");
	double *B = create_one_dim_double(120, "random");

	for (int d = 3; d < 800; d++)
	  for (int c = 1; c < 836; c++)
	    for (int b = 4; b < 119; b++)
	      for (int a = 4; a < 119; a++)
	      {
	        
	       E[a][b][c]=E[a+4][b+4][c]+0.079/C[a][b];
	        
	       C[a][b]=E[a][b][c]+A[a][b][c];
	       B[a]=E[a-4][b-1][c-3]-B[a]+B[a]/0.186*D[a][b];
	        
	       E[a][b][c]=B[a]/0.06;
	       A[a][b][c]=B[a+1]-0.636*A[a][b][c];
	      }

    return 0;
}