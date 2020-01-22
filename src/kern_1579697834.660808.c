#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(840, 740, 680, "ones");
	float **A = create_two_dim_float(390, 290, "ones");
	float ***B = create_three_dim_float(530, 770, 510, "ones");

	for (int d = 0; d < 508; d++)
	  for (int c = 1; c < 767; c++)
	    for (int b = 0; b < 526; b++)
	      for (int a = 0; a < 526; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+3][c]+0.519/A[a][b];
	        
	       B[a][b][c]=B[a+4][b+2][c+2]+0.786;
	      }

    return 0;
}