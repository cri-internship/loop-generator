#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(790, 860, 800, "random");
	int ***A = create_three_dim_int(650, 440, 380, "random");
	int ***B = create_three_dim_int(550, 300, 440, "random");

	for (int d = 0; d < 438; d++)
	  for (int c = 0; c < 298; c++)
	    for (int b = 0; b < 546; b++)
	      for (int a = 0; a < 546; a++)
	      {
	        
	       B[a][b][c]=B[a][b][c]/A[a][b][c]*C[a][b][c];
	       C[a][b][c]=B[a+4][b+2][c+2]/C[a][b][c]+A[a][b][c];
	      }

    return 0;
}