#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(330, "ones");
	double *A = create_one_dim_double(450, "ones");

	for (int b = 4; b < 325; b++)
	  for (int a = 4; a < 325; a++)
	  {
	    
	     A[a]=A[a-1]/0.994;
	    
	     B[a]=B[a+5]*0.758;
	    
	     A[a]=0.449;
	    
	     B[a]=0.162;
	  }

    return 0;
}