#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(840, 830, 510, "random");
	float *D = create_one_dim_float(580, "random");
	float ***C = create_three_dim_float(600, 440, 350, "random");
	float ***A = create_three_dim_float(490, 900, 480, "random");

	for (int d = 0; d < 480; d++)
	  for (int c = 0; c < 895; c++)
	    for (int b = 3; b < 485; b++)
	      for (int a = 3; a < 485; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+5][c]+D[a];
	        
	       D[a]=D[a+4]/0.825;
	        
	       D[a]=A[a][b][c];
	      }

    return 0;
}