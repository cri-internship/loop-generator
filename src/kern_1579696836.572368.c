#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(80, 10, "random");
	int *C = create_one_dim_int(610, "random");
	int *A = create_one_dim_int(590, "random");

	for (int d = 0; d < 6; d++)
	  for (int c = 3; c < 76; c++)
	    for (int b = 3; b < 76; b++)
	      for (int a = 3; a < 76; a++)
	      {
	        
	       B[a][b]=B[a+3][b+4]-39;
	        
	       B[a][b]=B[a+4][b]/25;
	        
	       C[a]=B[a][b];
	       C[a-3]=49;
	        
	       A[a]=29/C[a];
	       A[a-3]=B[a][b];
	      }

    return 0;
}