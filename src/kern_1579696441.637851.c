#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "random");
	double *B = create_one_dim_double(430, "random");

	for (int d = 4; d < 430; d++)
	  for (int c = 4; c < 430; c++)
	    for (int b = 4; b < 430; b++)
	      for (int a = 4; a < 430; a++)
	      {
	        
	       B[a]=B[a-4]+0.139;
	        
	       A[a]=A[a-4]*B[a];
	        
	       B[a]=B[a-1]*0.546;
	        
	       A[a]=A[a-2]-0.431;
	        
	       A[a]=A[a+5]*0.961;
	      }

    return 0;
}