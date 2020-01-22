#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(270, "ones");
	double *A = create_one_dim_double(530, "ones");

	for (int d = 2; d < 267; d++)
	  for (int c = 2; c < 267; c++)
	    for (int b = 2; b < 267; b++)
	      for (int a = 2; a < 267; a++)
	      {
	        
	       B[a]=B[a-2]+0.517;
	        
	       A[a]=A[a-2]-B[a];
	        
	       B[a]=0.227;
	      }

    return 0;
}