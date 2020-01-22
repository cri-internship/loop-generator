#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(890, 480, "ones");
	int ***B = create_three_dim_int(710, 480, 510, "ones");

	for (int d = 0; d < 508; d++)
	  for (int c = 0; c < 475; c++)
	    for (int b = 0; b < 709; b++)
	      for (int a = 0; a < 709; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+5][c+2]+A[a][b];
	      }

    return 0;
}