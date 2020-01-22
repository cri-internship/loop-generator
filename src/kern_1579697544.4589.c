#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(80, 120, 970, "zeros");
	float *B = create_one_dim_float(40, "zeros");
	float ***A = create_three_dim_float(540, 570, 730, "zeros");

	for (int d = 0; d < 729; d++)
	  for (int c = 0; c < 565; c++)
	    for (int b = 0; b < 36; b++)
	      for (int a = 0; a < 36; a++)
	      {
	        
	       B[a]=B[a+4]*0.801;
	        
	       A[a][b][c]=A[a+3][b+5][c+1]*0.025;
	      }

    return 0;
}