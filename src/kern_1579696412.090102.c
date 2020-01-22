#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(210, 120, 140, "ones");
	int ***B = create_three_dim_int(500, 850, 390, "ones");
	int **A = create_two_dim_int(650, 440, "ones");

	for (int d = 0; d < 387; d++)
	  for (int c = 5; c < 440; c++)
	    for (int b = 4; b < 497; b++)
	      for (int a = 4; a < 497; a++)
	      {
	        
	       A[a][b]=A[a-4][b-5]-C[a][b][c]/B[a][b][c];
	        
	       B[a][b][c]=B[a+3][b+3][c+3]-4;
	      }

    return 0;
}