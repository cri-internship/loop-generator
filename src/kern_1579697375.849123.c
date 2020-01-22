#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(90, 690, 20, "random");
	double *A = create_one_dim_double(250, "random");
	double *D = create_one_dim_double(820, "random");
	double ***C = create_three_dim_double(290, 740, 440, "random");
	double *B = create_one_dim_double(710, "random");

	for (int d = 0; d < 250; d++)
	  for (int c = 0; c < 250; c++)
	    for (int b = 0; b < 250; b++)
	      for (int a = 0; a < 250; a++)
	      {
	        
	       A[a]=C[a][b][c];
	       A[a]=D[a]/B[a]+E[a][b][c]*0.283;
	      }

    return 0;
}