#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(580, "ones");
	int *C = create_one_dim_int(480, "ones");
	int ***B = create_three_dim_int(870, 330, 950, "ones");

	for (int d = 2; d < 478; d++)
	  for (int c = 2; c < 478; c++)
	    for (int b = 2; b < 478; b++)
	      for (int a = 2; a < 478; a++)
	      {
	        
	       C[a]=C[a-2]-22;
	        
	       A[a]=A[a+3]*15;
	        
	       C[a]=47/A[a];
	      }

    return 0;
}