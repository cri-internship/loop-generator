#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(670, 910, "random");
	int **C = create_two_dim_int(370, 50, "random");
	int *A = create_one_dim_int(680, "random");

	for (int d = 0; d < 48; d++)
	  for (int c = 0; c < 366; c++)
	    for (int b = 0; b < 366; b++)
	      for (int a = 0; a < 366; a++)
	      {
	        
	       C[a][b]=C[a+4][b+2]-8;
	        
	       A[a]=A[a+2]-B[a][b];
	        
	       C[a][b]=A[a];
	      }

    return 0;
}