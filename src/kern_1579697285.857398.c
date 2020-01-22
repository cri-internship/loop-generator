#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(120, 1000, "ones");
	int ***C = create_three_dim_int(300, 640, 110, "ones");
	int ***B = create_three_dim_int(1000, 960, 640, "ones");
	int ***D = create_three_dim_int(260, 390, 270, "ones");

	for (int d = 0; d < 110; d++)
	  for (int c = 1; c < 640; c++)
	    for (int b = 5; b < 300; b++)
	      for (int a = 5; a < 300; a++)
	      {
	        
	       C[a][b][c]=42;
	       C[a-5][b-1][c]=47;
	      }

    return 0;
}