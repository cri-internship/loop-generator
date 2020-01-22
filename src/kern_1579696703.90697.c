#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(580, "random");

	for (int d = 5; d < 576; d++)
	  for (int c = 5; c < 576; c++)
	    for (int b = 5; b < 576; b++)
	      for (int a = 5; a < 576; a++)
	      {
	        
	       A[a]=A[a-5]*38;
	        
	       A[a]=A[a+4]/24;
	      }

    return 0;
}