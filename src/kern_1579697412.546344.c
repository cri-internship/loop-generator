#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(360, "random");
	int *B = create_one_dim_int(160, "random");

	for (int d = 2; d < 360; d++)
	  for (int c = 2; c < 360; c++)
	    for (int b = 2; b < 360; b++)
	      for (int a = 2; a < 360; a++)
	      {
	        
	       int var_a=A[a]/32;
	       int var_b=A[a-2]*2;
	      }

    return 0;
}