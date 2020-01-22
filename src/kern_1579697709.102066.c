#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(330, "random");
	float *C = create_one_dim_float(640, "random");
	float *B = create_one_dim_float(450, "random");

	for (int d = 0; d < 326; d++)
	  for (int c = 0; c < 326; c++)
	    for (int b = 0; b < 326; b++)
	      for (int a = 0; a < 326; a++)
	      {
	        
	       A[a]=0.762;
	       float  var_a=A[a]*0.171;
	        
	       C[a]=C[a+2]/B[a]*A[a];
	        
	       float var_b=B[a]+0.315;
	       B[a]=0.848;
	        
	       A[a]=A[a+4]/C[a];
	        
	       A[a]=C[a]*0.196;
	       C[a]=C[a+3]*A[a];
	      }

    return 0;
}