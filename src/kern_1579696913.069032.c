#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(270, "zeros");
	float *A = create_one_dim_float(550, "zeros");

	for (int b = 3; b < 268; b++)
	  for (int a = 3; a < 268; a++)
	  {
	    
	     B[a]=B[a-3]*0.059;
	    
	     B[a]=B[a+2]+0.43;
	  }

    return 0;
}