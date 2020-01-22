#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(50, 280, "zeros");

	for (int d = 0; d < 280; d++)
	  for (int c = 2; c < 50; c++)
	    for (int b = 2; b < 50; b++)
	      for (int a = 2; a < 50; a++)
	      {
	        
	       A[a][b]=30;
	       A[a-2][b]=32;
	      }

    return 0;
}