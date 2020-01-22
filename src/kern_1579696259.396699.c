#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(170, 910, 730, "zeros");
	int **D = create_two_dim_int(970, 380, "zeros");
	int **B = create_two_dim_int(170, 40, "zeros");
	int *A = create_one_dim_int(760, "zeros");

	for (int d = 0; d < 36; d++)
	  for (int c = 4; c < 167; c++)
	    for (int b = 4; b < 167; b++)
	      for (int a = 4; a < 167; a++)
	      {
	        
	       A[a]=A[a-1]*B[a][b];
	        
	       A[a]=41;
	        
	       int var_a=B[a][b]/3;
	       int var_b=B[a+3][b+4]-29;
	      }

    return 0;
}