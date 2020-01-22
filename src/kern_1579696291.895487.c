#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(960, "ones");
	double *A = create_one_dim_double(250, "ones");
	double *C = create_one_dim_double(600, "ones");

	for (int b = 4; b < 960; b++)
	  for (int a = 4; a < 960; a++)
	  {
	    
	     B[a]=B[a-4]/0.497;
	    
	     B[a]=A[a]/C[a];
	  }

    return 0;
}