#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(10, 610, "ones");
	float *A = create_one_dim_float(810, "ones");
	float *B = create_one_dim_float(270, "ones");

	for (int d = 0; d < 605; d++)
	  for (int c = 5; c < 10; c++)
	    for (int b = 5; b < 10; b++)
	      for (int a = 5; a < 10; a++)
	      {
	        
	       A[a]=A[a-3]*0.034;
	        
	       C[a][b]=C[a-5][b]-0.919;
	        
	       B[a]=B[a+3]/0.602;
	        
	       A[a]=A[a+2]-0.434;
	        
	       C[a][b]=A[a]+0.499;
	        
	       B[a]=0.869*C[a][b];
	      }

    return 0;
}