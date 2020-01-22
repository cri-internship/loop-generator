#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(590, "ones");
	int *A = create_one_dim_int(90, "ones");

	for (int d = 0; d < 89; d++)
	  for (int c = 0; c < 89; c++)
	    for (int b = 0; b < 89; b++)
	      for (int a = 0; a < 89; a++)
	      {
	        
	       A[a]=A[a+1]/30;
	      }

    return 0;
}