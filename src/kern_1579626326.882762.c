#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(710, 420, 270, "random");
	int **B = create_two_dim_int(1000, 760, "random");

	for (int d = 0; d < 756; d++)
	  for (int c = 0; c < 998; c++)
	    for (int b = 0; b < 998; b++)
	      for (int a = 0; a < 998; a++)
	      {
	        
	       B[a][b]=B[a+2][b+4]+A[a][b][c];
	      }

    return 0;
}