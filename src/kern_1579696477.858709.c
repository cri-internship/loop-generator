#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(160, "ones");
	float *E = create_one_dim_float(170, "ones");
	float ***C = create_three_dim_float(580, 520, 890, "ones");
	float *A = create_one_dim_float(490, "ones");
	float ***D = create_three_dim_float(620, 300, 600, "ones");

	for (int d = 4; d < 887; d++)
	  for (int c = 3; c < 515; c++)
	    for (int b = 0; b < 166; b++)
	      for (int a = 0; a < 166; a++)
	      {
	        
	       E[a]=E[a+4]*0.779;
	        
	       C[a][b][c]=0.074/E[a];
	       C[a+1][b+5][c+3]=D[a][b][c]+B[a]-D[a][b][c];
	        
	       C[a][b][c]=0.045;
	        
	       D[a][b][c]=C[a][b][c]/A[a]-E[a]*B[a];
	       A[a]=C[a][b-3][c-4]+D[a][b][c]*A[a]/E[a]-B[a];
	      }

    return 0;
}