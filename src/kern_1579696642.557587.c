#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(780, 1000, 760, "ones");
	int *D = create_one_dim_int(530, "ones");
	int *A = create_one_dim_int(640, "ones");
	int ***E = create_three_dim_int(730, 760, 590, "ones");
	int **B = create_two_dim_int(330, 790, "ones");

	for (int d = 0; d < 526; d++)
	  for (int c = 0; c < 526; c++)
	    for (int b = 0; b < 526; b++)
	      for (int a = 0; a < 526; a++)
	      {
	        
	       D[a]=D[a+4]+43;
	      }

    return 0;
}