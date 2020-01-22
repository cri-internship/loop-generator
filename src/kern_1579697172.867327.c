#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(490, 870, 280, "random");
	float *C = create_one_dim_float(570, "random");
	float ***B = create_three_dim_float(910, 730, 90, "random");

	for (int c = 2; c < 570; c++)
	  for (int b = 2; b < 570; b++)
	    for (int a = 2; a < 570; a++)
	    {
	      
	      C[a]=C[a-2]+0.977;
	    }

    return 0;
}