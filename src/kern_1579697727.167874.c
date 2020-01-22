#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(130, "ones");
	double *B = create_one_dim_double(50, "ones");
	double *C = create_one_dim_double(990, "ones");

	for (int d = 5; d < 47; d++)
	  for (int c = 5; c < 47; c++)
	    for (int b = 5; b < 47; b++)
	      for (int a = 5; a < 47; a++)
	      {
	        
	       A[a]=A[a+5]-0.14;
	        
	       A[a]=0.902;
	        
	       double var_a=B[a]+0.392;
	       double var_b=B[a+3]*0.889;
	      }

    return 0;
}