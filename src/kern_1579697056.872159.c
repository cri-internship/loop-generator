#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(420, "zeros");
	float *A = create_one_dim_float(450, "zeros");
	float ***E = create_three_dim_float(70, 320, 610, "zeros");
	float ***C = create_three_dim_float(940, 380, 640, "zeros");
	float **B = create_two_dim_float(710, 60, "zeros");

	for (int d = 0; d < 60; d++)
	  for (int c = 0; c < 420; c++)
	    for (int b = 0; b < 420; b++)
	      for (int a = 0; a < 420; a++)
	      {
	        
	       D[a]=A[a];
	       C[a][b][c]=D[a]/B[a][b]-C[a][b][c]*E[a][b][c];
	        
	       A[a]=B[a][b]/D[a]+0.42*A[a]-C[a][b][c];
	       B[a][b]=D[a]/A[a]+E[a][b][c]*C[a][b][c];
	      }

    return 0;
}