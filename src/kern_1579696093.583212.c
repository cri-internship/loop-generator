#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(650, 50, "zeros");
	int **B = create_two_dim_int(490, 130, "zeros");
	int *C = create_one_dim_int(520, "zeros");
	int *D = create_one_dim_int(970, "zeros");

	for (int d = 3; d < 50; d++)
	  for (int c = 0; c < 520; c++)
	    for (int b = 0; b < 520; b++)
	      for (int a = 0; a < 520; a++)
	      {
	        
	       A[a][b]=A[a][b-3]+D[a];
	        
	       C[a]=34;
	       C[a]=41;
	      }

    return 0;
}