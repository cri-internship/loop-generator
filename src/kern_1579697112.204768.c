#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(900, "zeros");

	for (int d = 0; d < 895; d++)
	  for (int c = 0; c < 895; c++)
	    for (int b = 0; b < 895; b++)
	      for (int a = 0; a < 895; a++)
	      {
	        
	       A[a]=A[a+5]-0.515;
	      }

    return 0;
}