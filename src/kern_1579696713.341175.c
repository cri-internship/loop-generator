#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(970, 470, 670, "ones");
	double *C = create_one_dim_double(820, "ones");
	double ***B = create_three_dim_double(140, 190, 340, "ones");
	double **A = create_two_dim_double(20, 340, "ones");

	for (int d = 0; d < 670; d++)
	  for (int c = 0; c < 470; c++)
	    for (int b = 4; b < 970; b++)
	      for (int a = 4; a < 970; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b][c]*A[a][b]/C[a]+B[a][b][c];
	      }

    return 0;
}