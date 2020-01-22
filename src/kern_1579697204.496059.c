#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(480, "random");
	float ***B = create_three_dim_float(200, 180, 540, "random");
	float *A = create_one_dim_float(110, "random");
	float *D = create_one_dim_float(600, "random");

	for (int c = 0; c < 107; c++)
	  for (int b = 0; b < 107; b++)
	    for (int a = 0; a < 107; a++)
	    {
	      
	      A[a]=A[a+3]+0.763;
	      
	      D[a]=D[a+1]/0.263;
	    }

    return 0;
}