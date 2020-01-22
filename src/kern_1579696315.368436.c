#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(510, 1000, "zeros");
	float *A = create_one_dim_float(980, "zeros");

	for (int d = 0; d < 1000; d++)
	  for (int c = 1; c < 505; c++)
	    for (int b = 1; b < 505; b++)
	      for (int a = 1; a < 505; a++)
	      {
	        
	       A[a]=0.388;
	       float  var_a=A[a]-0.355;
	        
	       A[a]=A[a+2]+0.921;
	        
	       A[a]=A[a]*B[a][b];
	       B[a][b]=A[a-1]/B[a][b];
	        
	       B[a][b]=B[a][b]+A[a];
	       B[a][b]=B[a+5][b]/0.665;
	      }

    return 0;
}