#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(800, 900, 630, "ones");
	float *D = create_one_dim_float(330, "ones");
	float **C = create_two_dim_float(460, 30, "ones");
	float *B = create_one_dim_float(730, "ones");

	for (int a = 0; a < 330; a++)
	{
	  
	    D[a]=A[a][a][a];
	    D[a]=C[a][a]-B[a]+B[a];
	}

    return 0;
}