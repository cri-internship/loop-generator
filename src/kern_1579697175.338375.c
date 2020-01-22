#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(380, 650, "zeros");
	float ***D = create_three_dim_float(760, 410, 620, "zeros");
	float *A = create_one_dim_float(180, "zeros");
	float ***C = create_three_dim_float(600, 940, 540, "zeros");

	for (int d = 0; d < 620; d++)
	  for (int c = 1; c < 410; c++)
	    for (int b = 1; b < 178; b++)
	      for (int a = 1; a < 178; a++)
	      {
	        
	       B[a][b]=B[a+3][b]+D[a][b][c]/C[a][b][c];
	        
	       A[a]=A[a+2]+B[a][b];
	        
	       D[a][b][c]=A[a];
	       D[a-1][b-1][c]=C[a][b][c];
	        
	       A[a]=C[a][b][c];
	      }

    return 0;
}