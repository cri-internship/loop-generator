#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(300, "ones");

	for (int b = 3; b < 300; b++)
	  for (int a = 3; a < 300; a++)
	  {
	    
	     float var_a=A[a]/0.082;
	     float var_b=A[a-3]/0.621;
	  }

    return 0;
}