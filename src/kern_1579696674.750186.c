#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(360, 310, "random");
	int **B = create_two_dim_int(70, 70, "random");

	for (int d = 4; d < 69; d++)
	  for (int c = 1; c < 66; c++)
	    for (int b = 1; b < 66; b++)
	      for (int a = 1; a < 66; a++)
	      {
	        
	       B[a][b]=B[a+4][b+1]-28;
	        
	       A[a][b]=B[a][b];
	       A[a][b+2]=B[a][b];
	        
	       B[a][b]=A[a][b];
	        
	       A[a][b]=A[a][b]-B[a][b];
	       B[a][b]=A[a][b-2]-B[a][b];
	      }

    return 0;
}