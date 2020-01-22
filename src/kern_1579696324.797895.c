#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(440, "ones");

	for (int b = 4; b < 439; b++)
	  for (int a = 4; a < 439; a++)
	  {
	    
	     A[a]=0.396;
	     float  var_a=A[a]-0.2;
	    
	     A[a]=A[a+1]/0.273;
	    
	     double var_b=A[a]/0.56;
	     double var_c=A[a-4]*0.376;
	  }

    return 0;
}