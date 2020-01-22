#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(530, "random");
	float **B = create_two_dim_float(750, 200, "random");
	float **C = create_two_dim_float(450, 790, "random");
	float ***A = create_three_dim_float(280, 820, 60, "random");

	for (int d = 0; d < 56; d++)
	  for (int c = 0; c < 819; c++)
	    for (int b = 0; b < 279; b++)
	      for (int a = 0; a < 279; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+1][c+4]-0.519;
	      }

    return 0;
}