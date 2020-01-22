#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(420, 190, "ones");
	int **B = create_two_dim_int(80, 780, "ones");

	for (int d = 0; d < 186; d++)
	  for (int c = 0; c < 416; c++)
	    for (int b = 0; b < 416; b++)
	      for (int a = 0; a < 416; a++)
	      {
	        
	       A[a][b]=A[a+4][b+3]+B[a][b];
	        
	       A[a][b]=B[a][b];
	      }

    return 0;
}