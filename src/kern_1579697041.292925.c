#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(380, "ones");
	int *B = create_one_dim_int(970, "ones");
	int **A = create_two_dim_int(320, 110, "ones");
	int **C = create_two_dim_int(800, 840, "ones");

	for (int d = 3; d < 970; d++)
	  for (int c = 3; c < 970; c++)
	    for (int b = 3; b < 970; b++)
	      for (int a = 3; a < 970; a++)
	      {
	        
	       B[a]=B[a-3]*29;
	      }

    return 0;
}