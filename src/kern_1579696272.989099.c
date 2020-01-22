#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(240, 240, "ones");
	float *A = create_one_dim_float(240, "ones");
	float **D = create_two_dim_float(730, 720, "ones");
	float ***B = create_three_dim_float(810, 50, 340, "ones");
	float **E = create_two_dim_float(800, 750, "ones");

	for (int b = 0; b < 237; b++)
	  for (int a = 0; a < 237; a++)
	  {
	    
	     A[a]=A[a+3]+0.792;
	  }

    return 0;
}