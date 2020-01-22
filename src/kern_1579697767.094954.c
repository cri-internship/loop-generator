#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(480, 600, 540, "random");
	int **B = create_two_dim_int(250, 420, "random");
	int ***A = create_three_dim_int(150, 20, 100, "random");
	int **D = create_two_dim_int(380, 130, "random");

	for (int d = 0; d < 126; d++)
	  for (int c = 0; c < 377; c++)
	    for (int b = 0; b < 377; b++)
	      for (int a = 0; a < 377; a++)
	      {
	        
	       D[a][b]=D[a+3][b+4]-8/B[a][b]+C[a][b][c];
	      }

    return 0;
}