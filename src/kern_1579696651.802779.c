#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(310, "zeros");
	int **C = create_two_dim_int(350, 990, "zeros");
	int *D = create_one_dim_int(10, "zeros");
	int **A = create_two_dim_int(100, 700, "zeros");

	for (int d = 0; d < 306; d++)
	  for (int c = 0; c < 306; c++)
	    for (int b = 0; b < 306; b++)
	      for (int a = 0; a < 306; a++)
	      {
	        
	       B[a]=B[a+4]-D[a]/A[a][b];
	      }

    return 0;
}