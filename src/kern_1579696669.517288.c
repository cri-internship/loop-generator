#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(750, "zeros");
	float ***B = create_three_dim_float(710, 390, 690, "zeros");

	for (int d = 0; d < 690; d++)
	  for (int c = 0; c < 390; c++)
	    for (int b = 0; b < 705; b++)
	      for (int a = 0; a < 705; a++)
	      {
	        
	       float var_a=B[a][b][c]+0.424;
	       float var_b=B[a+5][b][c]-0.292;
	      }

    return 0;
}