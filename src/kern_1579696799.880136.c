#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(300, "random");
	float *D = create_one_dim_float(350, "random");
	float *A = create_one_dim_float(330, "random");
	float *C = create_one_dim_float(830, "random");

	for (int d = 3; d < 300; d++)
	  for (int c = 3; c < 300; c++)
	    for (int b = 3; b < 300; b++)
	      for (int a = 3; a < 300; a++)
	      {
	        
	       B[a]=B[a-3]-0.001;
	        
	       float var_a=C[a]/0.94;
	       C[a]=0.347;
	        
	       B[a]=A[a]/0.065*B[a];
	       C[a]=A[a+2]*C[a];
	      }

    return 0;
}