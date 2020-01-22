#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(150, 760, "random");
	float ***A = create_three_dim_float(140, 520, 590, "random");
	float *C = create_one_dim_float(80, "random");

	for (int a = 0; a < 147; a++)
	{
	  
	    B[a][a]=B[a+3][a]+0.144;
	}

    return 0;
}