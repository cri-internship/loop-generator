#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(210, "ones");
	double **D = create_two_dim_double(850, 840, "ones");
	double ***C = create_three_dim_double(200, 600, 710, "ones");
	double *B = create_one_dim_double(730, "ones");
	double ***A = create_three_dim_double(700, 770, 380, "ones");

	for (int d = 0; d < 839; d++)
	  for (int c = 4; c < 210; c++)
	    for (int b = 4; b < 210; b++)
	      for (int a = 4; a < 210; a++)
	      {
	        
	       D[a][b]=D[a+3][b+1]*0.176;
	        
	       A[a][b][c]=E[a]+C[a][b][c];
	       D[a][b]=E[a-4]-0.791/A[a][b][c];
	      }

    return 0;
}