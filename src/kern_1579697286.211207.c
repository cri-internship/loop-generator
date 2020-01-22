#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(610, 460, 450, "zeros");
	float *A = create_one_dim_float(730, "zeros");

	for (int d = 0; d < 446; d++)
	  for (int c = 0; c < 456; c++)
	    for (int b = 3; b < 606; b++)
	      for (int a = 3; a < 606; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+4][c+4]/0.663;
	        
	       B[a][b][c]=A[a];
	        
	       float var_a=A[a]/0.186;
	       float var_b=A[a+4]-0.769;
	      }

    return 0;
}