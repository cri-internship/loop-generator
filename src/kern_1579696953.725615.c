#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(480, 130, "zeros");
	float *E = create_one_dim_float(770, "zeros");
	float **C = create_two_dim_float(280, 480, "zeros");
	float *B = create_one_dim_float(380, "zeros");
	float **A = create_two_dim_float(700, 360, "zeros");

	for (int a = 4; a < 476; a++)
	{
	  
	    E[a]=E[a-4]+0.447;
	  
	    E[a]=D[a][a]*0.415;
	    D[a][a]=D[a+3][a+4]-0.933;
	}

    return 0;
}