#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(510, 130, "ones");
	float **B = create_two_dim_float(910, 520, "ones");
	float *C = create_one_dim_float(800, "ones");

	for (int b = 0; b < 799; b++)
	  for (int a = 0; a < 799; a++)
	  {
	    
	     float var_a=C[a]*0.715;
	     float var_b=C[a+1]+0.454;
	  }

    return 0;
}