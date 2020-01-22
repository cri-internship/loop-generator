#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(680, "ones");
	float ***B = create_three_dim_float(770, 90, 640, "ones");
	float ***C = create_three_dim_float(270, 650, 310, "ones");
	float *D = create_one_dim_float(220, "ones");
	float ***E = create_three_dim_float(400, 780, 290, "ones");

	for (int a = 3; a < 400; a++)
	{
	  
	    E[a][a][a]=E[a-1][a-2][a-3]*D[a]+B[a][a][a]/A[a]-C[a][a][a];
	}

    return 0;
}