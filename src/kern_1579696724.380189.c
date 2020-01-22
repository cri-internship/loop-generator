#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(30, "random");
	float *A = create_one_dim_float(130, "random");
	float **B = create_two_dim_float(320, 210, "random");
	float ***C = create_three_dim_float(890, 850, 970, "random");

	for (int a = 5; a < 27; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-2][a]-D[a]/A[a];
	  
	    D[a]=D[a+3]-0.327;
	}

    return 0;
}