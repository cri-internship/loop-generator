#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(190, "random");
	int **B = create_two_dim_int(30, 960, "random");

	for (int d = 4; d < 189; d++)
	  for (int c = 4; c < 189; c++)
	    for (int b = 4; b < 189; b++)
	      for (int a = 4; a < 189; a++)
	      {
	        
	       A[a]=A[a-4]-B[a][b];
	        
	       A[a]=A[a+1]-B[a][b];
	      }

    return 0;
}