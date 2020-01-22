#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(480, 690, 20, "random");
	float **A = create_two_dim_float(810, 490, "random");
	float *B = create_one_dim_float(510, "random");

	for (int d = 2; d < 490; d++)
	  for (int c = 0; c < 810; c++)
	    for (int b = 0; b < 810; b++)
	      for (int a = 0; a < 810; a++)
	      {
	        
	       float var_a=A[a][b]-0.831;
	       float var_b=A[a][b-2]/0.949;
	      }

    return 0;
}