#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(460, "ones");

	for (int b = 0; b < 460; b++)
	  for (int a = 0; a < 460; a++)
	  {
	    
	     double var_a=A[a]*0.391;
	     double var_b=A[a]*0.157;
	  }

    return 0;
}