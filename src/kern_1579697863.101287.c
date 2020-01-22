#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(800, "random");
	float **A = create_two_dim_float(450, 920, "random");

	for (int d = 0; d < 918; d++)
	  for (int c = 4; c < 448; c++)
	    for (int b = 4; b < 448; b++)
	      for (int a = 4; a < 448; a++)
	      {
	        
	       A[a][b]=A[a-4][b]-0.696;
	        
	       float var_a=A[a][b]+0.59;
	       float var_b=A[a+2][b+2]*0.817;
	      }

    return 0;
}