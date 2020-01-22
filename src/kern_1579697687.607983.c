#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(570, "random");
	double *C = create_one_dim_double(630, "random");
	double **A = create_two_dim_double(560, 740, "random");
	double ***E = create_three_dim_double(430, 650, 790, "random");
	double ***B = create_three_dim_double(400, 330, 250, "random");

	for (int d = 3; d < 570; d++)
	  for (int c = 3; c < 570; c++)
	    for (int b = 3; b < 570; b++)
	      for (int a = 3; a < 570; a++)
	      {
	        
	       D[a]=D[a-3]*0.8;
	        
	       E[a][b][c]=D[a]-B[a][b][c];
	       C[a]=D[a-2]-E[a][b][c]*C[a];
	      }

    return 0;
}