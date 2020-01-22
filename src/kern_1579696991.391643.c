#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(350, "random");

	for (int d = 0; d < 350; d++)
	  for (int c = 0; c < 350; c++)
	    for (int b = 0; b < 350; b++)
	      for (int a = 0; a < 350; a++)
	      {
	        
	       A[a]=6;
	       float  var_a=A[a]-6;
	      }

    return 0;
}