#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(870, 180, 440, "random");
	int ***B = create_three_dim_int(600, 110, 630, "random");
	int ***C = create_three_dim_int(230, 750, 400, "random");

	for (int d = 2; d < 400; d++)
	  for (int c = 5; c < 750; c++)
	    for (int b = 3; b < 230; b++)
	      for (int a = 3; a < 230; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-5][c-2]-A[a][b][c];
	      }

    return 0;
}