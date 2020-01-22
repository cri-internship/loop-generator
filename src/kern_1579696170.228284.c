#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(990, "random");
	double *B = create_one_dim_double(180, "random");

	for (int d = 5; d < 180; d++)
	  for (int c = 5; c < 180; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       B[a]=0.637;
	       A[a]=B[a]*0.883;
	        
	       B[a]=B[a-5]*0.875;
	        
	       A[a]=A[a-4]+0.092;
	        
	       double var_a=B[a]+0.45;
	       B[a]=0.125;
	        
	       double var_b=A[a]+0.835;
	       double var_c=A[a-3]-0.141;
	      }

    return 0;
}