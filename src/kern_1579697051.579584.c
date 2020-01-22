#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(680, 610, "zeros");

	for (int c = 3; c < 610; c++)
	  for (int b = 5; b < 680; b++)
	    for (int a = 5; a < 680; a++)
	    {
	      
	      float var_a=A[a][b]/0.222;
	      float var_b=A[a-5][b-3]-0.359;
	    }

    return 0;
}