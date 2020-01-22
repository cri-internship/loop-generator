#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(780, 250, 380, "random");

	for (int d = 0; d < 375; d++)
	  for (int c = 0; c < 249; c++)
	    for (int b = 0; b < 777; b++)
	      for (int a = 0; a < 777; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+1][c+5]*0.033;
	        
	       A[a][b][c]=0.263;
	      }

    return 0;
}