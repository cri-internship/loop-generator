#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(650, "ones");
	double *C = create_one_dim_double(460, "ones");
	double *B = create_one_dim_double(880, "ones");

	for (int d = 5; d < 645; d++)
	  for (int c = 5; c < 645; c++)
	    for (int b = 5; b < 645; b++)
	      for (int a = 5; a < 645; a++)
	      {
	        
	       A[a]=A[a+5]-0.146;
	        
	       A[a]=0.444;
	        
	       C[a]=A[a]*0.393;
	       B[a]=A[a-3]-B[a]/B[a];
	        
	       A[a]=B[a]*0.283;
	       B[a]=B[a-3]-C[a];
	      }

    return 0;
}