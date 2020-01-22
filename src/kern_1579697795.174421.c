#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(540, 330, 430, "random");
	float **B = create_two_dim_float(180, 540, "random");
	float **A = create_two_dim_float(640, 380, "random");

	for (int d = 1; d < 430; d++)
	  for (int c = 5; c < 330; c++)
	    for (int b = 4; b < 540; b++)
	      for (int a = 4; a < 540; a++)
	      {
	        
	       C[a][b][c]=B[a][b];
	       C[a-4][b-5][c-1]=A[a][b];
	      }

    return 0;
}