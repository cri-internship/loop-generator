#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(210, "ones");

	for (int d = 5; d < 205; d++)
	  for (int c = 5; c < 205; c++)
	    for (int b = 5; b < 205; b++)
	      for (int a = 5; a < 205; a++)
	      {
	        
	       A[a]=A[a+5]*0.302;
	        
	       A[a]=0.959;
	        
	       double var_a=A[a]*0.983;
	       double var_b=A[a-5]/0.145;
	      }

    return 0;
}