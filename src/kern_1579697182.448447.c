#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(200, "ones");
	float ***C = create_three_dim_float(680, 120, 80, "ones");
	float **E = create_two_dim_float(160, 920, "ones");
	float **D = create_two_dim_float(700, 280, "ones");
	float **A = create_two_dim_float(310, 950, "ones");

	for (int d = 5; d < 280; d++)
	  for (int c = 4; c < 158; c++)
	    for (int b = 4; b < 158; b++)
	      for (int a = 4; a < 158; a++)
	      {
	        
	       A[a][b]=A[a-1][b]/0.575;
	        
	       D[a][b]=A[a][b]*B[a]/E[a][b];
	       D[a-4][b-5]=C[a][b][c]*A[a][b]-B[a];
	        
	       A[a][b]=D[a][b]+0.287-B[a]/C[a][b][c];
	        
	       C[a][b][c]=E[a][b]/C[a][b][c]-D[a][b]*A[a][b]+B[a];
	       A[a][b]=E[a+2][b+2]/C[a][b][c]*B[a];
	      }

    return 0;
}