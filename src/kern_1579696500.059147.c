#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(140, 210, "ones");
	int *A = create_one_dim_int(60, "ones");
	int *B = create_one_dim_int(40, "ones");

	for (int d = 0; d < 208; d++)
	  for (int c = 4; c < 40; c++)
	    for (int b = 4; b < 40; b++)
	      for (int a = 4; a < 40; a++)
	      {
	        
	       B[a]=B[a-4]+5;
	        
	       A[a]=A[a-1]-B[a];
	        
	       C[a][b]=C[a][b+2]/A[a];
	      }

    return 0;
}