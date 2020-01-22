#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(800, "zeros");
	int **A = create_two_dim_int(20, 800, "zeros");

	for (int d = 0; d < 800; d++)
	  for (int c = 0; c < 15; c++)
	    for (int b = 0; b < 15; b++)
	      for (int a = 0; a < 15; a++)
	      {
	        
	       A[a][b]=A[a+5][b]*47;
	      }

    return 0;
}