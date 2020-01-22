#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(20, 970, "ones");
	int *B = create_one_dim_int(500, "ones");

	for (int d = 0; d < 969; d++)
	  for (int c = 0; c < 20; c++)
	    for (int b = 0; b < 20; b++)
	      for (int a = 0; a < 20; a++)
	      {
	        
	       A[a][b]=49;
	       A[a][b+1]=B[a];
	      }

    return 0;
}