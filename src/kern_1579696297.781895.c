#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(820, "ones");
	int **C = create_two_dim_int(630, 940, "ones");
	int *B = create_one_dim_int(140, "ones");

	for (int d = 0; d < 140; d++)
	  for (int c = 0; c < 140; c++)
	    for (int b = 0; b < 140; b++)
	      for (int a = 0; a < 140; a++)
	      {
	        
	       int var_a=B[a]+36;
	       int var_b=B[a]+21;
	      }

    return 0;
}