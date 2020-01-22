#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(550, 260, "ones");
	int **C = create_two_dim_int(160, 760, "ones");
	int ***D = create_three_dim_int(280, 720, 840, "ones");
	int **A = create_two_dim_int(390, 840, "ones");

	for (int d = 0; d < 836; d++)
	  for (int c = 0; c < 390; c++)
	    for (int b = 0; b < 390; b++)
	      for (int a = 0; a < 390; a++)
	      {
	        
	       C[a][b]=A[a][b]/3;
	       A[a][b]=A[a][b+4]/C[a][b];
	      }

    return 0;
}