#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(600, "random");
	double *A = create_one_dim_double(760, "random");
	double *B = create_one_dim_double(760, "random");

	for (int d = 4; d < 600; d++)
	  for (int c = 4; c < 600; c++)
	    for (int b = 4; b < 600; b++)
	      for (int a = 4; a < 600; a++)
	      {
	        
	       C[a]=C[a-3]/A[a];
	        
	       B[a]=B[a-4]*C[a]+C[a];
	        
	       B[a]=C[a]/0.739;
	        
	       A[a]=0.169;
	       float  var_a=A[a]/0.262;
	        
	       A[a]=A[a+3]-0.463;
	        
	       A[a]=A[a+4]*0.991;
	        
	       A[a]=A[a]-B[a];
	      }

    return 0;
}