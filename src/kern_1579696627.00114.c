#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(390, "random");
	float **B = create_two_dim_float(740, 560, "random");
	float *D = create_one_dim_float(750, "random");
	float **A = create_two_dim_float(940, 720, "random");

	for (int d = 4; d < 560; d++)
	  for (int c = 3; c < 740; c++)
	    for (int b = 3; b < 740; b++)
	      for (int a = 3; a < 740; a++)
	      {
	        
	       D[a]=D[a-1]-0.408;
	        
	       D[a]=0.687;
	        
	       B[a][b]=0.543/A[a][b];
	       B[a-1][b-4]=0.554+D[a];
	        
	       C[a]=A[a][b]-B[a][b];
	       D[a]=A[a-1][b-2]/D[a]-B[a][b];
	      }

    return 0;
}