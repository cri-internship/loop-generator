#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(910, "random");
	float *B = create_one_dim_float(950, "random");
	float *C = create_one_dim_float(340, "random");

	for (int d = 3; d < 338; d++)
	  for (int c = 3; c < 338; c++)
	    for (int b = 3; b < 338; b++)
	      for (int a = 3; a < 338; a++)
	      {
	        
	       B[a]=C[a]/0.208;
	       B[a]=B[a]-0.35;
	        
	       C[a]=C[a-3]/0.072;
	        
	       C[a]=C[a+2]-0.588;
	        
	       A[a]=B[a]-A[a]*C[a];
	       C[a]=B[a-1]*C[a]/A[a];
	        
	       A[a]=B[a]/C[a]+A[a];
	       B[a]=B[a+4]+0.205;
	        
	       C[a]=B[a]/A[a];
	       B[a]=B[a+2]/A[a];
	        
	       A[a]=B[a]+A[a]/C[a];
	       C[a]=B[a+1]-C[a]/A[a];
	      }

    return 0;
}