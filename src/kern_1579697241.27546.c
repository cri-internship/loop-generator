#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(330, "ones");

	for (int b = 0; b < 325; b++)
	  for (int a = 0; a < 325; a++)
	  {
	    
	     A[a]=A[a+5]+0.539;
	  }

    return 0;
}