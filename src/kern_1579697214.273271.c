#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(910, "random");
	int *C = create_one_dim_int(790, "random");
	int *B = create_one_dim_int(700, "random");

	for (int d = 0; d < 785; d++)
	  for (int c = 0; c < 785; c++)
	    for (int b = 0; b < 785; b++)
	      for (int a = 0; a < 785; a++)
	      {
	        
	       C[a]=28;
	       C[a+5]=46;
	      }

    return 0;
}