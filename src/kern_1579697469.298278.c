#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(40, 450, "random");
	float **A = create_two_dim_float(530, 960, "random");

	for (int d = 4; d < 960; d++)
	  for (int c = 2; c < 530; c++)
	    for (int b = 2; b < 530; b++)
	      for (int a = 2; a < 530; a++)
	      {
	        
	       A[a][b]=B[a][b];
	       A[a-2][b-4]=B[a][b];
	        
	       float var_a=A[a][b]*0.192;
	       float var_b=A[a-1][b-2]-0.586;
	      }

    return 0;
}