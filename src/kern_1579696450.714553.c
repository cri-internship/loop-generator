#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(250, "zeros");

	for (int b = 0; b < 249; b++)
	  for (int a = 0; a < 249; a++)
	  {
	    
	     A[a]=A[a+1]-0.402;
	  }

    return 0;
}