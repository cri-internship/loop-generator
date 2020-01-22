#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(340, 120, 610, "ones");
	float **D = create_two_dim_float(860, 90, "ones");
	float ***C = create_three_dim_float(310, 830, 190, "ones");
	float *A = create_one_dim_float(10, "ones");

	for (int b = 0; b < 115; b++)
	  for (int a = 0; a < 337; a++)
	  {
	    
	     float var_a=B[a][b][a]-0.748;
	     float var_b=B[a+3][b+5][a+1]/0.571;
	  }

    return 0;
}