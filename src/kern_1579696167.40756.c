#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "random");
	int ***C = create_three_dim_int(310, 350, 60, "random");
	int ***D = create_three_dim_int(410, 100, 510, "random");
	int **B = create_two_dim_int(290, 510, "random");

	for (int d = 0; d < 56; d++)
	  for (int c = 0; c < 346; c++)
	    for (int b = 0; b < 306; b++)
	      for (int a = 0; a < 306; a++)
	      {
	        
	       C[a][b][c]=C[a+4][b+4][c+4]/15;
	      }

    return 0;
}