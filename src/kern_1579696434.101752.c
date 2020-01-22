#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(710, "zeros");
	float ***B = create_three_dim_float(800, 440, 30, "zeros");

	for (int d = 1; d < 27; d++)
	  for (int c = 3; c < 436; c++)
	    for (int b = 2; b < 710; b++)
	      for (int a = 2; a < 710; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-3][c-1]*A[a];
	        
	       float var_a=A[a]*0.214;
	       A[a]=0.623;
	        
	       float var_b=B[a][b][c]-0.98;
	       float var_c=B[a+2][b+4][c+3]/0.888;
	      }

    return 0;
}