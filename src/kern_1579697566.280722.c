#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(510, 800, 950, "random");
	int ***D = create_three_dim_int(310, 40, 270, "random");
	int **B = create_two_dim_int(400, 740, "random");
	int **C = create_two_dim_int(580, 610, "random");

	for (int d = 0; d < 740; d++)
	  for (int c = 4; c < 400; c++)
	    for (int b = 4; b < 400; b++)
	      for (int a = 4; a < 400; a++)
	      {
	        
	       B[a][b]=B[a-4][b]-D[a][b][c]/C[a][b];
	      }

    return 0;
}