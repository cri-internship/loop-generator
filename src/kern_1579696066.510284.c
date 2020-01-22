#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(600, "zeros");
	int ***C = create_three_dim_int(600, 280, 210, "zeros");
	int ***B = create_three_dim_int(920, 340, 310, "zeros");
	int *A = create_one_dim_int(960, "zeros");

	for (int d = 3; d < 210; d++)
	  for (int c = 1; c < 280; c++)
	    for (int b = 0; b < 600; b++)
	      for (int a = 0; a < 600; a++)
	      {
	        
	       C[a][b][c]=C[a][b-1][c-3]*5;
	      }

    return 0;
}