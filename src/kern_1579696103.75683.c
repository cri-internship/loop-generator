#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(380, "random");
	float *B = create_one_dim_float(170, "random");
	float **A = create_two_dim_float(820, 740, "random");
	float *C = create_one_dim_float(100, "random");

	for (int d = 0; d < 740; d++)
	  for (int c = 3; c < 100; c++)
	    for (int b = 3; b < 100; b++)
	      for (int a = 3; a < 100; a++)
	      {
	        
	       C[a]=C[a-3]/0.937;
	        
	       A[a][b]=A[a+2][b]/B[a];
	        
	       D[a]=D[a+1]*C[a]/A[a][b]+A[a][b];
	        
	       float var_a=D[a]*0.702;
	       float var_b=D[a+3]/0.038;
	      }

    return 0;
}