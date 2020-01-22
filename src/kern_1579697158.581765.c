#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(200, "zeros");
	double *A = create_one_dim_double(350, "zeros");

	for (int d = 3; d < 200; d++)
	  for (int c = 3; c < 200; c++)
	    for (int b = 3; b < 200; b++)
	      for (int a = 3; a < 200; a++)
	      {
	        
	       A[a]=0.017;
	       A[a+5]=0.98;
	        
	       B[a]=0.679;
	       B[a]=0.605;
	        
	       A[a]=A[a]-B[a];
	       B[a]=A[a-3]*B[a];
	      }

    return 0;
}