#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(170, "zeros");
	double *A = create_one_dim_double(840, "zeros");

	for (int b = 5; b < 170; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     A[a]=A[a-5]+0.21;
	    
	     B[a]=0.308;
	     float  var_a=B[a]+0.988;
	    
	     A[a]=B[a]/A[a];
	     B[a]=A[a];
	  }

    return 0;
}