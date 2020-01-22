#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(560, 970, "random");
	float ***A = create_three_dim_float(640, 780, 150, "random");
	float ***D = create_three_dim_float(590, 210, 200, "random");
	float *E = create_one_dim_float(890, "random");
	float **B = create_two_dim_float(10, 510, "random");

	for (int a = 4; a < 560; a++)
	{
	  
	    C[a][a]=C[a-4][a-1]*0.231;
	  
	    A[a][a][a]=0.803;
	    A[a-1][a-3][a-4]=0.625;
	}

    return 0;
}