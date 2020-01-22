#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(20, 780, "random");
	int **B = create_two_dim_int(490, 340, "random");

	for (int d = 3; d < 338; d++)
	  for (int c = 0; c < 20; c++)
	    for (int b = 0; b < 20; b++)
	      for (int a = 0; a < 20; a++)
	      {
	        
	       B[a][b]=B[a+1][b+1]/2;
	        
	       A[a][b]=B[a][b];
	       A[a][b-3]=B[a][b];
	        
	       B[a][b]=B[a][b]/47;
	       A[a][b]=B[a+5][b+2]/A[a][b];
	      }

    return 0;
}