#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(70, 910, "random");
	int *A = create_one_dim_int(200, "random");

	for (int d = 0; d < 905; d++)
	  for (int c = 0; c < 66; c++)
	    for (int b = 0; b < 66; b++)
	      for (int a = 0; a < 66; a++)
	      {
	        
	       B[a][b]=B[a+3][b+2]+34;
	        
	       B[a][b]=B[a+4][b+5]+A[a];
	      }

    return 0;
}