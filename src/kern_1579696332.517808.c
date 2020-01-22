#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(920, "ones");

	for (int b = 0; b < 917; b++)
	  for (int a = 0; a < 917; a++)
	  {
	    
	     A[a]=A[a+3]*0.924;
	    
	     A[a]=0.18;
	  }

    return 0;
}