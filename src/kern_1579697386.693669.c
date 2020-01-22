#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(10, 950, 660, "ones");
	int ***C = create_three_dim_int(890, 130, 260, "ones");
	int ***D = create_three_dim_int(220, 450, 520, "ones");
	int **A = create_two_dim_int(790, 390, "ones");

	for (int d = 0; d < 256; d++)
	  for (int c = 0; c < 129; c++)
	    for (int b = 0; b < 888; b++)
	      for (int a = 0; a < 888; a++)
	      {
	        
	       C[a][b][c]=C[a+2][b+1][c+4]*7;
	      }

    return 0;
}