#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(980, "random");

	for (int d = 0; d < 975; d++)
	  for (int c = 0; c < 975; c++)
	    for (int b = 0; b < 975; b++)
	      for (int a = 0; a < 975; a++)
	      {
	        
	       A[a]=5;
	       A[a+5]=41;
	        
	       A[a]=43;
	      }

    return 0;
}