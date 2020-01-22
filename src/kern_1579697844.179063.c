#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(190, "zeros");
	double ***C = create_three_dim_double(30, 800, 280, "zeros");
	double ***B = create_three_dim_double(780, 340, 400, "zeros");
	double *E = create_one_dim_double(870, "zeros");
	double ***A = create_three_dim_double(790, 690, 800, "zeros");

	for (int d = 4; d < 187; d++)
	  for (int c = 4; c < 187; c++)
	    for (int b = 4; b < 187; b++)
	      for (int a = 4; a < 187; a++)
	      {
	        
	       D[a]=D[a-4]-0.651;
	        
	       D[a]=D[a+3]+C[a][b][c]/E[a]-A[a][b][c]*B[a][b][c];
	      }

    return 0;
}