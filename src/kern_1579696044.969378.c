#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(300, 790, "zeros");
	float *A = create_one_dim_float(900, "zeros");
	float **C = create_two_dim_float(430, 170, "zeros");

	for (int d = 1; d < 169; d++)
	  for (int c = 1; c < 426; c++)
	    for (int b = 1; b < 426; b++)
	      for (int a = 1; a < 426; a++)
	      {
	        
	       C[a][b]=C[a+4][b+1]/0.971*B[a][b];
	        
	       float var_a=C[a][b]*0.957;
	       float var_b=C[a-1][b-1]+0.188;
	      }

    return 0;
}