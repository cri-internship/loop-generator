#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(490, 440, "random");
	int ***B = create_three_dim_int(150, 600, 730, "random");
	int *A = create_one_dim_int(570, "random");

	for (int d = 3; d < 730; d++)
	  for (int c = 5; c < 440; c++)
	    for (int b = 2; b < 150; b++)
	      for (int a = 2; a < 150; a++)
	      {
	        
	       C[a][b]=C[a-2][b-1]-A[a];
	        
	       int var_a=B[a][b][c]/45;
	       int var_b=B[a][b-5][c-3]/40;
	      }

    return 0;
}