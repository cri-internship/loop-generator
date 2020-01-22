#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(220, 800, 40, "random");
	int *A = create_one_dim_int(900, "random");
	int *D = create_one_dim_int(260, "random");
	int ***C = create_three_dim_int(950, 690, 930, "random");

	for (int d = 3; d < 40; d++)
	  for (int c = 1; c < 800; c++)
	    for (int b = 2; b < 220; b++)
	      for (int a = 2; a < 220; a++)
	      {
	        
	       B[a][b][c]=44;
	       B[a-2][b-1][c-3]=2;
	      }

    return 0;
}