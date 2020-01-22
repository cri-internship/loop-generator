#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(880, "ones");
	float **B = create_two_dim_float(110, 800, "ones");

	for (int b = 1; b < 800; b++)
	  for (int a = 3; a < 110; a++)
	  {
	    
	     B[a][b]=B[a][b-1]+A[a];
	    
	     A[a]=A[a-3]*0.455;
	    
	     A[a]=A[a-2]-0.281;
	    
	     A[a]=A[a+1]+0.709;
	  }

    return 0;
}