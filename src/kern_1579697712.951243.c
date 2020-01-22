#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(600, "zeros");
	int *A = create_one_dim_int(560, "zeros");
	int *B = create_one_dim_int(430, "zeros");

	for (int d = 3; d < 425; d++)
	  for (int c = 3; c < 425; c++)
	    for (int b = 3; b < 425; b++)
	      for (int a = 3; a < 425; a++)
	      {
	        
	       C[a]=C[a-3]-B[a];
	        
	       C[a]=34;
	        
	       int var_b=B[a]-10;
	       int var_c=B[a+5]-4;
	      }

    return 0;
}