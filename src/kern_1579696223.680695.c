#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(960, 60, 390, "random");
	float **B = create_two_dim_float(440, 860, "random");

	for (int d = 4; d < 390; d++)
	  for (int c = 5; c < 60; c++)
	    for (int b = 3; b < 439; b++)
	      for (int a = 3; a < 439; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-5][c-4]/0.097;
	        
	       B[a][b]=0.36;
	       B[a+1][b+4]=0.721;
	      }

    return 0;
}