#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(800, 320, 920, "ones");
	float ***E = create_three_dim_float(760, 360, 620, "ones");
	float **D = create_two_dim_float(300, 570, "ones");
	float *A = create_one_dim_float(210, "ones");
	float ***B = create_three_dim_float(770, 640, 590, "ones");

	for (int a = 5; a < 300; a++)
	{
	  
	    D[a][a]=D[a-1][a-5]*C[a][a][a]-A[a]+B[a][a][a]/E[a][a][a];
	}

    return 0;
}