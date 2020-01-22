#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(680, 130, "random");
	float **A = create_two_dim_float(710, 250, "random");
	float *B = create_one_dim_float(800, "random");
	float ***E = create_three_dim_float(950, 10, 510, "random");
	float ***D = create_three_dim_float(160, 40, 360, "random");

	for (int d = 0; d < 509; d++)
	  for (int c = 0; c < 5; c++)
	    for (int b = 1; b < 800; b++)
	      for (int a = 1; a < 800; a++)
	      {
	        
	       B[a]=B[a-1]+A[a][b]*C[a][b]-E[a][b][c];
	        
	       E[a][b][c]=E[a+4][b+5][c+1]-0.567;
	      }

    return 0;
}