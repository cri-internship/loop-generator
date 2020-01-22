#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(600, "ones");
	double ***C = create_three_dim_double(560, 300, 700, "ones");
	double ***E = create_three_dim_double(800, 860, 670, "ones");
	double **A = create_two_dim_double(180, 350, "ones");
	double *D = create_one_dim_double(760, "ones");

	for (int d = 1; d < 670; d++)
	  for (int c = 0; c < 860; c++)
	    for (int b = 1; b < 800; b++)
	      for (int a = 1; a < 800; a++)
	      {
	        
	       E[a][b][c]=C[a][b][c]+B[a]-A[a][b]*D[a];
	       E[a-1][b][c-1]=C[a][b][c]*B[a];
	      }

    return 0;
}