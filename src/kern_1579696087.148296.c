#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(800, "zeros");
	int **B = create_two_dim_int(900, 50, "zeros");

	for (int d = 4; d < 800; d++)
	  for (int c = 4; c < 800; c++)
	    for (int b = 4; b < 800; b++)
	      for (int a = 4; a < 800; a++)
	      {
	        
	       int var_a=A[a]/26;
	       A[a]=25;
	        
	       A[a]=B[a][b];
	      }

    return 0;
}