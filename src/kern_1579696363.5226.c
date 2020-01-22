#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(460, 290, "zeros");
	float *A = create_one_dim_float(190, "zeros");

	for (int d = 0; d < 285; d++)
	  for (int c = 3; c < 190; c++)
	    for (int b = 3; b < 190; b++)
	      for (int a = 3; a < 190; a++)
	      {
	        
	       A[a]=A[a-3]+0.876;
	        
	       float var_a=B[a][b]-0.076;
	       float var_b=B[a+2][b+5]+0.171;
	      }

    return 0;
}