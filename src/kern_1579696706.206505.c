#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(320, "ones");
	double *A = create_one_dim_double(870, "ones");

	for (int b = 5; b < 315; b++)
	  for (int a = 5; a < 315; a++)
	  {
	    
	     A[a]=A[a-3]+B[a];
	    
	     B[a]=0.79;
	     float  var_a=B[a]-0.507;
	    
	     B[a]=B[a+1]*0.389;
	    
	     B[a]=B[a+5]/0.006;
	    
	     A[a]=B[a];
	  }

    return 0;
}