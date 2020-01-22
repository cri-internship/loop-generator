#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(920, 230, "ones");
	int **A = create_two_dim_int(400, 550, "ones");
	int *D = create_one_dim_int(270, "ones");
	int ***B = create_three_dim_int(310, 650, 260, "ones");

	for (int d = 0; d < 547; d++)
	  for (int c = 2; c < 270; c++)
	    for (int b = 2; b < 270; b++)
	      for (int a = 2; a < 270; a++)
	      {
	        
	       D[a]=D[a-2]-47;
	        
	       A[a][b]=D[a];
	       A[a][b+3]=2;
	      }

    return 0;
}