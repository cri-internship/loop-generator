#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(760, 810, "random");
	float *B = create_one_dim_float(980, "random");
	float *A = create_one_dim_float(380, "random");
	float *D = create_one_dim_float(40, "random");

	for (int d = 0; d < 40; d++)
	  for (int c = 0; c < 40; c++)
	    for (int b = 0; b < 40; b++)
	      for (int a = 0; a < 40; a++)
	      {
	        
	       D[a]=0.093;
	       float  var_a=D[a]-0.398;
	      }

    return 0;
}