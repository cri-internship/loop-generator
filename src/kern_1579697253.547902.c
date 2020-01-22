#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(190, 710, 860, "zeros");
	float **C = create_two_dim_float(90, 620, "zeros");
	float ***B = create_three_dim_float(970, 640, 490, "zeros");

	for (int d = 0; d < 859; d++)
	  for (int c = 0; c < 705; c++)
	    for (int b = 0; b < 187; b++)
	      for (int a = 0; a < 187; a++)
	      {
	        
	       float var_a=A[a][b][c]+0.786;
	       float var_b=A[a+3][b+5][c+1]/0.623;
	      }

    return 0;
}