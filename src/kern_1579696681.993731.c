#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(880, "ones");
	int *A = create_one_dim_int(410, "ones");
	int **D = create_two_dim_int(270, 660, "ones");
	int ***B = create_three_dim_int(130, 140, 50, "ones");

	for (int d = 3; d < 410; d++)
	  for (int c = 3; c < 410; c++)
	    for (int b = 3; b < 410; b++)
	      for (int a = 3; a < 410; a++)
	      {
	        
	       A[a]=A[a-3]*18;
	      }

    return 0;
}