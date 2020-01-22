#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(60, "random");
	float *A = create_one_dim_float(130, "random");
	float ***D = create_three_dim_float(810, 980, 760, "random");
	float ***C = create_three_dim_float(940, 760, 380, "random");

	for (int a = 1; a < 940; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-1][a]-B[a]*D[a][a][a];
	}

    return 0;
}