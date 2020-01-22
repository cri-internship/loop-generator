#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(750, 890, "random");
	int ***C = create_three_dim_int(60, 760, 490, "random");
	int **B = create_two_dim_int(100, 790, "random");
	int ***D = create_three_dim_int(280, 800, 540, "random");

	for (int d = 2; d < 490; d++)
	  for (int c = 1; c < 760; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-1][c-2]-30;
	      }

    return 0;
}