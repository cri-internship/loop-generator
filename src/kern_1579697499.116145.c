#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(210, 770, "ones");
	float *D = create_one_dim_float(580, "ones");
	float ***C = create_three_dim_float(900, 860, 220, "ones");
	float ***B = create_three_dim_float(260, 360, 120, "ones");

	for (int d = 3; d < 770; d++)
	  for (int c = 3; c < 210; c++)
	    for (int b = 3; b < 210; b++)
	      for (int a = 3; a < 210; a++)
	      {
	        
	       float var_a=A[a][b]+0.269;
	       float var_b=A[a-3][b-3]-0.137;
	      }

    return 0;
}