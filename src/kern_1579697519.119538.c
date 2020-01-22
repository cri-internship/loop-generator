#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(700, "random");

	for (int d = 5; d < 700; d++)
	  for (int c = 5; c < 700; c++)
	    for (int b = 5; b < 700; b++)
	      for (int a = 5; a < 700; a++)
	      {
	        
	       A[a]=A[a-5]*0;
	        
	       int var_a=A[a]/3;
	       int var_b=A[a-1]-20;
	      }

    return 0;
}