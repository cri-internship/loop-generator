#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(780, "zeros");
	float ***C = create_three_dim_float(860, 180, 60, "zeros");
	float **D = create_two_dim_float(470, 690, "zeros");
	float **B = create_two_dim_float(40, 750, "zeros");
	float *A = create_one_dim_float(260, "zeros");

	for (int d = 0; d < 56; d++)
	  for (int c = 1; c < 178; c++)
	    for (int b = 1; b < 258; b++)
	      for (int a = 1; a < 258; a++)
	      {
	        
	       C[a][b][c]=C[a+4][b+2][c+4]*0.39;
	        
	       C[a][b][c]=C[a+4][b+2][c+2]-B[a][b]*A[a]+D[a][b]/E[a];
	        
	       A[a]=A[a+2]*0.751;
	        
	       B[a][b]=D[a][b]/C[a][b][c];
	       C[a][b][c]=D[a-1][b-1]*C[a][b][c]/E[a]-A[a];
	      }

    return 0;
}