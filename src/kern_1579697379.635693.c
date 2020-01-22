#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(240, 420, "ones");
	int **C = create_two_dim_int(20, 640, "ones");
	int **B = create_two_dim_int(500, 710, "ones");
	int ***D = create_three_dim_int(840, 570, 840, "ones");
	int *A = create_one_dim_int(70, "ones");

	for (int d = 0; d < 637; d++)
	  for (int c = 0; c < 19; c++)
	    for (int b = 0; b < 19; b++)
	      for (int a = 0; a < 19; a++)
	      {
	        
	       C[a][b]=C[a+1][b+3]+50;
	      }

    return 0;
}