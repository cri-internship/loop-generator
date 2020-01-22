#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(130, "ones");
	double *B = create_one_dim_double(280, "ones");

	for (int d = 4; d < 125; d++)
	  for (int c = 4; c < 125; c++)
	    for (int b = 4; b < 125; b++)
	      for (int a = 4; a < 125; a++)
	      {
	        
	       A[a]=A[a]*B[a];
	       A[a]=B[a];
	        
	       B[a]=B[a+1]+0.107;
	        
	       A[a]=A[a+5]-0.736;
	        
	       B[a]=B[a+3]+0.286;
	        
	       B[a]=A[a]/B[a];
	       A[a]=A[a+4]+B[a];
	      }

    return 0;
}