#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(450, 700, 770, "zeros");
	float *A = create_one_dim_float(1000, "zeros");

	for (int d = 4; d < 768; d++)
	  for (int c = 3; c < 696; c++)
	    for (int b = 1; b < 448; b++)
	      for (int a = 1; a < 448; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-3][c]*0.211;
	        
	       B[a][b][c]=B[a-1][b-1][c-4]*A[a];
	        
	       A[a]=A[a+2]*0.837;
	        
	       B[a][b][c]=B[a][b+4][c+2]*0.267;
	        
	       A[a]=0.963;
	      }

    return 0;
}