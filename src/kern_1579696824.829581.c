#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(290, "ones");
	double **A = create_two_dim_double(920, 410, "ones");
	double ***C = create_three_dim_double(990, 710, 260, "ones");
	double ***E = create_three_dim_double(590, 390, 850, "ones");
	double ***B = create_three_dim_double(460, 600, 770, "ones");

	for (int d = 1; d < 850; d++)
	  for (int c = 2; c < 390; c++)
	    for (int b = 2; b < 289; b++)
	      for (int a = 2; a < 289; a++)
	      {
	        
	       D[a]=D[a+1]+0.731;
	        
	       E[a][b][c]=D[a]-B[a][b][c]/C[a][b][c];
	       E[a-2][b-2][c-1]=0.604;
	      }

    return 0;
}