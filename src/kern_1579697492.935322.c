#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(310, 220, "ones");
	int **A = create_two_dim_int(370, 760, "ones");
	int **C = create_two_dim_int(230, 100, "ones");
	int **B = create_two_dim_int(1000, 260, "ones");

	for (int d = 4; d < 260; d++)
	  for (int c = 1; c < 1000; c++)
	    for (int b = 1; b < 1000; b++)
	      for (int a = 1; a < 1000; a++)
	      {
	        
	       C[a][b]=B[a][b]-A[a][b]/C[a][b];
	       D[a][b]=B[a-1][b-4]*D[a][b];
	      }

    return 0;
}