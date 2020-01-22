#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(60, "zeros");
	double *A = create_one_dim_double(880, "zeros");

	for (int d = 0; d < 56; d++)
	  for (int c = 0; c < 56; c++)
	    for (int b = 0; b < 56; b++)
	      for (int a = 0; a < 56; a++)
	      {
	        
	       B[a]=B[a+4]/A[a];
	        
	       B[a]=A[a];
	        
	       A[a]=0.956;
	       A[a+2]=B[a];
	      }

    return 0;
}