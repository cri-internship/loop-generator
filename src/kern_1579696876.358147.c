#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(540, 940, "ones");
	int *A = create_one_dim_int(590, "ones");
	int **D = create_two_dim_int(840, 140, "ones");
	int **C = create_two_dim_int(360, 210, "ones");

	for (int d = 2; d < 940; d++)
	  for (int c = 1; c < 540; c++)
	    for (int b = 1; b < 540; b++)
	      for (int a = 1; a < 540; a++)
	      {
	        
	       A[a]=A[a-1]-D[a][b];
	        
	       A[a]=D[a][b];
	        
	       B[a][b]=32;
	       B[a-1][b-2]=2;
	      }

    return 0;
}