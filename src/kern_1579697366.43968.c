#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(710, "zeros");
	float ***A = create_three_dim_float(600, 250, 630, "zeros");
	float *B = create_one_dim_float(30, "zeros");

	for (int c = 5; c < 710; c++)
	  for (int b = 5; b < 710; b++)
	    for (int a = 5; a < 710; a++)
	    {
	      
	      C[a]=C[a-5]+0.783;
	      
	      B[a]=C[a]-0.304;
	      
	      float var_a=C[a]+0.657;
	      float var_b=C[a-1]+0.592;
	    }

    return 0;
}