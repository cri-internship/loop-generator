#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(480, "ones");
	int **A = create_two_dim_int(130, 170, "ones");

	for (int d = 4; d < 480; d++)
	  for (int c = 4; c < 480; c++)
	    for (int b = 4; b < 480; b++)
	      for (int a = 4; a < 480; a++)
	      {
	        
	       B[a]=31;
	       B[a-4]=50;
	      }

    return 0;
}