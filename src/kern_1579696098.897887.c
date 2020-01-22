#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(70, 330, "ones");
	int ***B = create_three_dim_int(500, 490, 390, "ones");

	for (int d = 0; d < 385; d++)
	  for (int c = 0; c < 488; c++)
	    for (int b = 0; b < 498; b++)
	      for (int a = 0; a < 498; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+2][c+5]+32;
	      }

    return 0;
}