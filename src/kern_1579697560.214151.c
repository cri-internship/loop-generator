#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(510, 200, "random");
	float **D = create_two_dim_float(230, 790, "random");
	float **B = create_two_dim_float(690, 160, "random");
	float **C = create_two_dim_float(20, 310, "random");
	float **E = create_two_dim_float(380, 430, "random");

	for (int d = 0; d < 197; d++)
	  for (int c = 0; c < 509; c++)
	    for (int b = 0; b < 509; b++)
	      for (int a = 0; a < 509; a++)
	      {
	        
	       A[a][b]=A[a+1][b+3]*0.549;
	      }

    return 0;
}