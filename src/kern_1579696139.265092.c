#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "random");

	for (int b = 3; b < 580; b++)
	  for (int a = 3; a < 580; a++)
	  {
	    
	     A[a]=0.856;
	     A[a-1]=0.648;
	    
	     float var_a=A[a]+0.478;
	     float var_b=A[a-3]/0.319;
	  }

    return 0;
}