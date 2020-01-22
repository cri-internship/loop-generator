#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(290, 200, "ones");
	int ***B = create_three_dim_int(890, 900, 630, "ones");

	for (int d = 0; d < 626; d++)
	  for (int c = 5; c < 200; c++)
	    for (int b = 5; b < 290; b++)
	      for (int a = 5; a < 290; a++)
	      {
	        
	       A[a][b]=A[a-5][b-3]-B[a][b][c];
	        
	       B[a][b][c]=A[a][b];
	       B[a+2][b][c+4]=A[a][b];
	        
	       B[a][b][c]=41;
	      }

    return 0;
}