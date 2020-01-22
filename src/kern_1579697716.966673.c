#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(360, 220, 210, "zeros");
	int *B = create_one_dim_int(900, "zeros");
	int ***A = create_three_dim_int(770, 200, 150, "zeros");

	for (int d = 1; d < 900; d++)
	  for (int c = 1; c < 900; c++)
	    for (int b = 1; b < 900; b++)
	      for (int a = 1; a < 900; a++)
	      {
	        
	       B[a]=B[a]*C[a][b][c];
	       C[a][b][c]=B[a-1]+A[a][b][c];
	      }

    return 0;
}