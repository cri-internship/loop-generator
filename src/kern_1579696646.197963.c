#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(820, 560, "ones");
	double **D = create_two_dim_double(330, 820, "ones");
	double *B = create_one_dim_double(660, "ones");
	double ***A = create_three_dim_double(590, 260, 790, "ones");

	for (int d = 4; d < 560; d++)
	  for (int c = 1; c < 330; c++)
	    for (int b = 1; b < 330; b++)
	      for (int a = 1; a < 330; a++)
	      {
	        
	       double var_a=D[a][b]*0.696;
	       D[a][b]=0.251;
	        
	       C[a][b]=C[a][b]*A[a][b][c]+D[a][b]-B[a];
	       A[a][b][c]=C[a-1][b-4]+A[a][b][c];
	      }

    return 0;
}