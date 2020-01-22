#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(230, 550, "random");
	float ***D = create_three_dim_float(530, 120, 430, "random");
	float *A = create_one_dim_float(210, "random");
	float ***E = create_three_dim_float(300, 850, 990, "random");
	float *B = create_one_dim_float(970, "random");

	for (int d = 0; d < 988; d++)
	  for (int c = 1; c < 550; c++)
	    for (int b = 1; b < 210; b++)
	      for (int a = 1; a < 210; a++)
	      {
	        
	       C[a][b]=C[a-1][b-1]-0.328;
	        
	       B[a]=A[a]/E[a][b][c]-C[a][b];
	       A[a]=D[a][b][c]+E[a][b][c]*0.282-B[a];
	        
	       E[a][b][c]=E[a][b+2][c+2]/A[a]-C[a][b];
	      }

    return 0;
}