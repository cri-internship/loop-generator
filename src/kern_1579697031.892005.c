#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(610, 970, 790, "random");
	double *A = create_one_dim_double(310, "random");
	double ***C = create_three_dim_double(490, 800, 260, "random");
	double *D = create_one_dim_double(950, "random");
	double *E = create_one_dim_double(660, "random");

	for (int d = 0; d < 310; d++)
	  for (int c = 0; c < 310; c++)
	    for (int b = 0; b < 310; b++)
	      for (int a = 0; a < 310; a++)
	      {
	        
	       A[a]=E[a]*B[a][b][c];
	       C[a][b][c]=A[a]*C[a][b][c]+D[a]/C[a][b][c];
	        
	       E[a]=A[a]-A[a];
	       D[a]=E[a]+0.208*B[a][b][c];
	      }

    return 0;
}