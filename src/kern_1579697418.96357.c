#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(560, 580, 920, "ones");
	int ***D = create_three_dim_int(760, 470, 770, "ones");
	int **B = create_two_dim_int(350, 950, "ones");
	int **C = create_two_dim_int(880, 230, "ones");

	for (int d = 1; d < 230; d++)
	  for (int c = 4; c < 880; c++)
	    for (int b = 4; b < 880; b++)
	      for (int a = 4; a < 880; a++)
	      {
	        
	       C[a][b]=C[a-4][b-1]/20;
	      }

    return 0;
}