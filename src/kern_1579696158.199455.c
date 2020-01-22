#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(110, "ones");
	float *D = create_one_dim_float(370, "ones");
	float ***B = create_three_dim_float(380, 770, 120, "ones");
	float ***A = create_three_dim_float(520, 620, 120, "ones");

	for (int d = 0; d < 370; d++)
	  for (int c = 0; c < 370; c++)
	    for (int b = 0; b < 370; b++)
	      for (int a = 0; a < 370; a++)
	      {
	        
	       float var_a=D[a]+0.328;
	       float var_b=D[a]-0.654;
	      }

    return 0;
}