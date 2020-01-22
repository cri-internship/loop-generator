#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(240, 520, "random");
	float *B = create_one_dim_float(700, "random");
	float *A = create_one_dim_float(580, "random");

	for (int d = 0; d < 516; d++)
	  for (int c = 0; c < 240; c++)
	    for (int b = 0; b < 240; b++)
	      for (int a = 0; a < 240; a++)
	      {
	        
	       float var_a=B[a]/0.84;
	       B[a]=0.534;
	        
	       C[a][b]=C[a][b+4]/0.825;
	      }

    return 0;
}