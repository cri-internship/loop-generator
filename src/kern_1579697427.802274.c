#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(700, 390, 200, "random");
	float *C = create_one_dim_float(90, "random");
	float **D = create_two_dim_float(420, 740, "random");
	float *E = create_one_dim_float(930, "random");
	float *B = create_one_dim_float(200, "random");

	for (int d = 0; d < 89; d++)
	  for (int c = 0; c < 89; c++)
	    for (int b = 0; b < 89; b++)
	      for (int a = 0; a < 89; a++)
	      {
	        
	       C[a]=C[a+1]*0.978;
	      }

    return 0;
}