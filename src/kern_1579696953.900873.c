#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(250, 440, 950, "random");
	float *B = create_one_dim_float(680, "random");
	float ***C = create_three_dim_float(560, 400, 30, "random");
	float *E = create_one_dim_float(10, "random");
	float **D = create_two_dim_float(530, 380, "random");

	for (int a = 5; a < 10; a++)
	{
	  
	    E[a]=E[a-5]/0.238;
	}

    return 0;
}