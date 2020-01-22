#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(800, 630, "zeros");
	float **A = create_two_dim_float(170, 260, "zeros");
	float ***C = create_three_dim_float(740, 310, 700, "zeros");
	float *B = create_one_dim_float(150, "zeros");

	for (int d = 2; d < 696; d++)
	  for (int c = 3; c < 256; c++)
	    for (int b = 4; b < 145; b++)
	      for (int a = 4; a < 145; a++)
	      {
	        
	       A[a][b]=A[a+1][b+4]+0.679;
	        
	       C[a][b][c]=0.956/B[a];
	       C[a+1][b+4][c+3]=D[a][b]*D[a][b]/A[a][b];
	        
	       A[a][b]=0.045;
	        
	       C[a][b][c]=0.38;
	        
	       B[a]=C[a][b][c]*D[a][b]-A[a][b];
	       B[a+5]=D[a][b]/C[a][b][c]*A[a][b];
	        
	       float var_a=C[a][b][c]+0.681;
	       float var_b=C[a+5][b][c+4]/0.775;
	        
	       C[a][b][c]=A[a][b]/C[a][b][c]*D[a][b]-B[a];
	       D[a][b]=A[a+5][b+4]-D[a][b]/C[a][b][c]*B[a];
	      }

    return 0;
}