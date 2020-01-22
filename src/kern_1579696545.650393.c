#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(740, "ones");
	double *A = create_one_dim_double(360, "ones");

	for (int d = 4; d < 357; d++)
	  for (int c = 4; c < 357; c++)
	    for (int b = 4; b < 357; b++)
	      for (int a = 4; a < 357; a++)
	      {
	        
	       B[a]=B[a-2]/0.37;
	        
	       double var_a=A[a]/0.414;
	       A[a]=0.714;
	        
	       B[a]=0.065;
	        
	       A[a]=B[a]/0.668;
	       B[a]=B[a+2]+A[a];
	        
	       A[a]=A[a]/B[a];
	       A[a]=A[a+3]-B[a];
	      }

    return 0;
}