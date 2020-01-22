#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(130, "random");
	int ***B = create_three_dim_int(380, 710, 700, "random");

	for (int d = 4; d < 700; d++)
	  for (int c = 2; c < 710; c++)
	    for (int b = 4; b < 130; b++)
	      for (int a = 4; a < 130; a++)
	      {
	        
	       A[a]=A[a-4]+15;
	        
	       int var_a=B[a][b][c]*19;
	       int var_b=B[a-3][b-2][c-4]-42;
	      }

    return 0;
}