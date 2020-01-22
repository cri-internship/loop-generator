#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(90, "random");
	float **D = create_two_dim_float(180, 720, "random");
	float *C = create_one_dim_float(290, "random");
	float ***B = create_three_dim_float(410, 230, 560, "random");
	float ***E = create_three_dim_float(700, 440, 690, "random");

	for (int a = 4; a < 410; a++)
	{
	  
	    C[a]=B[a][a][a]/C[a]+0.391;
	    B[a][a][a]=B[a-4][a-1][a]-D[a][a];
	}

    return 0;
}