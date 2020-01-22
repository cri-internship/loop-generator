#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(910, 150, 240, "ones");
	float *B = create_one_dim_float(940, "ones");
	float ***C = create_three_dim_float(10, 710, 570, "ones");
	float ***D = create_three_dim_float(20, 980, 390, "ones");

	for (int d = 4; d < 235; d++)
	  for (int c = 1; c < 145; c++)
	    for (int b = 1; b < 6; b++)
	      for (int a = 1; a < 6; a++)
	      {
	        
	       A[a][b][c]=A[a][b][c-4]*0.267;
	        
	       B[a]=B[a-1]*D[a][b][c]-0.573/C[a][b][c];
	        
	       C[a][b][c]=C[a+4][b+3][c+1]*B[a];
	        
	       A[a][b][c]=0.328;
	        
	       D[a][b][c]=A[a][b][c]*C[a][b][c]+B[a];
	       D[a+4][b+5][c+5]=B[a]*A[a][b][c];
	        
	       B[a]=A[a][b][c]-B[a]/D[a][b][c]*C[a][b][c];
	       C[a][b][c]=A[a+5][b+5][c+5]/B[a]-C[a][b][c];
	      }

    return 0;
}