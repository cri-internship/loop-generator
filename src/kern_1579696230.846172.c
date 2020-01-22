#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(410, "zeros");
	float *B = create_one_dim_float(600, "zeros");

	for (int d = 1; d < 410; d++)
	  for (int c = 1; c < 410; c++)
	    for (int b = 1; b < 410; b++)
	      for (int a = 1; a < 410; a++)
	      {
	        
	       B[a]=B[a-1]+0.242;
	        
	       A[a]=0.819;
	       A[a]=0.861;
	        
	       B[a]=A[a];
	      }

    return 0;
}