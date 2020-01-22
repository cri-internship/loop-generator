#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(790, 680, "zeros");
	int ***A = create_three_dim_int(360, 400, 30, "zeros");
	int **C = create_two_dim_int(50, 730, "zeros");

	for (int d = 3; d < 730; d++)
	  for (int c = 1; c < 50; c++)
	    for (int b = 1; b < 50; b++)
	      for (int a = 1; a < 50; a++)
	      {
	        
	       C[a][b]=C[a][b]/A[a][b][c];
	       B[a][b]=C[a-1][b-3]*B[a][b];
	      }

    return 0;
}