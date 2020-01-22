#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(210, 450, 460, "ones");
	int **A = create_two_dim_int(400, 830, "ones");
	int **D = create_two_dim_int(400, 870, "ones");
	int ***B = create_three_dim_int(100, 620, 470, "ones");
	int ***E = create_three_dim_int(320, 190, 50, "ones");

	for (int d = 5; d < 470; d++)
	  for (int c = 1; c < 620; c++)
	    for (int b = 4; b < 100; b++)
	      for (int a = 4; a < 100; a++)
	      {
	        
	       int var_a=B[a][b][c]-7;
	       int var_b=B[a-4][b-1][c-5]*29;
	      }

    return 0;
}