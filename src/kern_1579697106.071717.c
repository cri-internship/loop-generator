#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(540, "ones");
	double **A = create_two_dim_double(210, 230, "ones");
	double ***B = create_three_dim_double(480, 760, 880, "ones");
	double ***C = create_three_dim_double(490, 450, 330, "ones");

	for (int d = 3; d < 330; d++)
	  for (int c = 1; c < 227; c++)
	    for (int b = 4; b < 207; b++)
	      for (int a = 4; a < 207; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-1][c-3]/A[a][b];
	        
	       B[a][b][c]=B[a+2][b+2][c]+0.314;
	        
	       A[a][b]=B[a][b][c]-D[a];
	       A[a+3][b+3]=C[a][b][c];
	      }

    return 0;
}