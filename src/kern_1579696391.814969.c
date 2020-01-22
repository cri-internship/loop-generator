#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(530, 810, 130, "ones");
	float **A = create_two_dim_float(990, 400, "ones");
	float *D = create_one_dim_float(360, "ones");
	float ***B = create_three_dim_float(180, 150, 520, "ones");
	float **C = create_two_dim_float(690, 850, "ones");

	for (int b = 5; b < 150; b++)
	  for (int a = 3; a < 180; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-5][a-3]/0.531;
	    
	     E[a][b][a]=E[a+5][b+3][a+3]+0.805;
	  }

    return 0;
}