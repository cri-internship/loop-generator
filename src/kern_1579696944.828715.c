#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(100, 440, "zeros");
	int *A = create_one_dim_int(650, "zeros");

	for (int d = 0; d < 645; d++)
	  for (int c = 0; c < 645; c++)
	    for (int b = 0; b < 645; b++)
	      for (int a = 0; a < 645; a++)
	      {
	        
	       A[a]=11;
	       A[a+5]=21;
	      }

    return 0;
}