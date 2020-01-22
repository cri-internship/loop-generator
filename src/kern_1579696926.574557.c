#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(320, "ones");
	float **C = create_two_dim_float(120, 250, "ones");
	float ***B = create_three_dim_float(750, 170, 160, "ones");

	for (int d = 0; d < 160; d++)
	  for (int c = 4; c < 170; c++)
	    for (int b = 2; b < 115; b++)
	      for (int a = 2; a < 115; a++)
	      {
	        
	       C[a][b]=C[a-2][b-4]/0.43;
	        
	       B[a][b][c]=B[a][b-3][c]/0.595-A[a];
	        
	       C[a][b]=C[a+5][b+4]/B[a][b][c];
	      }

    return 0;
}