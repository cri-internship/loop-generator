#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(870, 240, "ones");
	int **C = create_two_dim_int(820, 850, "ones");
	int *A = create_one_dim_int(120, "ones");

	for (int d = 0; d < 116; d++)
	  for (int c = 0; c < 116; c++)
	    for (int b = 0; b < 116; b++)
	      for (int a = 0; a < 116; a++)
	      {
	        
	       A[a]=A[a+4]*32;
	      }

    return 0;
}