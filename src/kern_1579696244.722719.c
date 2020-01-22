#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(50, 550, "random");
	float *D = create_one_dim_float(970, "random");
	float *C = create_one_dim_float(530, "random");
	float ***E = create_three_dim_float(460, 990, 810, "random");
	float **B = create_two_dim_float(40, 1000, "random");

	for (int d = 4; d < 530; d++)
	  for (int c = 4; c < 530; c++)
	    for (int b = 4; b < 530; b++)
	      for (int a = 4; a < 530; a++)
	      {
	        
	       D[a]=D[a+5]/0.156;
	        
	       D[a]=0.792;
	        
	       C[a]=0.298;
	       C[a-4]=0.015;
	        
	       float var_a=C[a]-0.191;
	       float var_b=C[a-3]/0.143;
	        
	       float var_c=C[a]/0.122;
	      }

    return 0;
}