#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(900, "random");
	int **B = create_two_dim_int(310, 850, "random");

	for (int d = 4; d < 850; d++)
	  for (int c = 2; c < 310; c++)
	    for (int b = 2; b < 310; b++)
	      for (int a = 2; a < 310; a++)
	      {
	        
	       B[a][b]=A[a]/B[a][b];
	       A[a]=B[a][b];
	        
	       B[a][b]=A[a];
	        
	       A[a]=B[a][b]/A[a];
	       A[a]=B[a][b-4]+A[a];
	      }

    return 0;
}