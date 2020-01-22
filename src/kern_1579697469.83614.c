#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(550, 730, "zeros");
	float **A = create_two_dim_float(480, 160, "zeros");
	float *B = create_one_dim_float(60, "zeros");

	for (int d = 0; d < 730; d++)
	  for (int c = 3; c < 60; c++)
	    for (int b = 3; b < 60; b++)
	      for (int a = 3; a < 60; a++)
	      {
	        
	       B[a]=B[a-3]*C[a][b];
	        
	       A[a][b]=C[a][b]+A[a][b]/B[a];
	       C[a][b]=A[a][b]-B[a];
	        
	       C[a][b]=C[a+4][b]-0.285;
	        
	       float var_a=B[a]/0.954;
	       B[a]=0.485;
	      }

    return 0;
}