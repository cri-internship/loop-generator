#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(480, "random");
	int *C = create_one_dim_int(310, "random");
	int *A = create_one_dim_int(480, "random");

	for (int d = 0; d < 305; d++)
	  for (int c = 0; c < 305; c++)
	    for (int b = 0; b < 305; b++)
	      for (int a = 0; a < 305; a++)
	      {
	        
	       C[a]=0;
	       C[a+5]=44;
	      }

    return 0;
}