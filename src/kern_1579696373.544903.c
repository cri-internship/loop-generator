#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(810, 790, 270, "random");
	float *B = create_one_dim_float(150, "random");
	float *D = create_one_dim_float(20, "random");
	float ***A = create_three_dim_float(710, 540, 460, "random");

	for (int d = 2; d < 266; d++)
	  for (int c = 2; c < 537; c++)
	    for (int b = 3; b < 17; b++)
	      for (int a = 3; a < 17; a++)
	      {
	        
	       D[a]=D[a-3]+0.729;
	        
	       C[a][b][c]=C[a+1][b+1][c+4]/0.659;
	        
	       D[a]=D[a+2]*C[a][b][c]+A[a][b][c];
	        
	       C[a][b][c]=0.124;
	        
	       C[a][b][c]=A[a][b][c]*D[a];
	       B[a]=A[a][b+3][c+2]/D[a]+B[a];
	      }

    return 0;
}