#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(840, 70, 990, "ones");
	int ***A = create_three_dim_int(910, 190, 650, "ones");

	for (int d = 3; d < 990; d++)
	  for (int c = 1; c < 70; c++)
	    for (int b = 0; b < 840; b++)
	      for (int a = 0; a < 840; a++)
	      {
	        
	       B[a][b][c]=B[a][b-1][c-3]/37;
	      }

    return 0;
}