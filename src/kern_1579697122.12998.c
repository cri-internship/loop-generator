#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(860, 930, 730, "random");
	float **E = create_two_dim_float(880, 50, "random");
	float **B = create_two_dim_float(700, 720, "random");
	float **C = create_two_dim_float(90, 140, "random");
	float *D = create_one_dim_float(530, "random");

	for (int a = 5; a < 700; a++)
	{
	  
	    B[a][a]=B[a-1][a-5]-0.25;
	  
	    B[a][a]=D[a]*E[a][a];
	  
	    float var_a=B[a][a]/0.554;
	}

    return 0;
}