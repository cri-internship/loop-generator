#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(510, "zeros");
	double *B = create_one_dim_double(500, "zeros");

	for (int d = 0; d < 495; d++)
	  for (int c = 0; c < 495; c++)
	    for (int b = 0; b < 495; b++)
	      for (int a = 0; a < 495; a++)
	      {
	        
	       A[a]=A[a+3]*B[a];
	        
	       B[a]=A[a];
	       B[a+4]=A[a];
	        
	       B[a]=B[a]+0.309;
	       A[a]=B[a+2]+A[a];
	        
	       A[a]=B[a]/A[a];
	       B[a]=B[a+5]/A[a];
	      }

    return 0;
}