#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(150, 980, "ones");
	int **A = create_two_dim_int(130, 480, "ones");

	for (int d = 2; d < 480; d++)
	  for (int c = 4; c < 130; c++)
	    for (int b = 4; b < 130; b++)
	      for (int a = 4; a < 130; a++)
	      {
	        
	       A[a][b]=A[a-4][b-1]-B[a][b];
	        
	       A[a][b]=A[a-2][b]+14;
	        
	       A[a][b]=A[a][b-2]*B[a][b];
	      }

    return 0;
}