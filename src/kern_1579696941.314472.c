#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(180, "random");
	float ***B = create_three_dim_float(270, 540, 560, "random");
	float *E = create_one_dim_float(640, "random");
	float **C = create_two_dim_float(800, 480, "random");
	float *D = create_one_dim_float(430, "random");

	for (int d = 0; d < 480; d++)
	  for (int c = 3; c < 180; c++)
	    for (int b = 3; b < 180; b++)
	      for (int a = 3; a < 180; a++)
	      {
	        
	       C[a][b]=C[a-1][b]*0.469;
	        
	       A[a]=C[a][b]-B[a][b][c];
	       A[a-3]=E[a]*D[a];
	      }

    return 0;
}