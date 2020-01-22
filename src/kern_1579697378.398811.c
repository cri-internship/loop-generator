#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(790, 630, "random");
	int **A = create_two_dim_int(620, 740, "random");

	for (int d = 4; d < 629; d++)
	  for (int c = 4; c < 788; c++)
	    for (int b = 4; b < 788; b++)
	      for (int a = 4; a < 788; a++)
	      {
	        
	       B[a][b]=B[a][b-3]-31;
	        
	       B[a][b]=B[a-4][b-2]+5;
	        
	       B[a][b]=B[a][b+1]+A[a][b];
	        
	       B[a][b]=B[a+2][b+1]/A[a][b];
	      }

    return 0;
}