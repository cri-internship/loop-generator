#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(600, 480, 970, "ones");
	float *B = create_one_dim_float(120, "ones");
	float **C = create_two_dim_float(330, 530, "ones");
	float **A = create_two_dim_float(120, 390, "ones");

	for (int a = 0; a < 120; a++)
	{
	  
	    A[a][a]=C[a][a]/D[a][a][a];
	    A[a][a]=B[a]/D[a][a][a];
	}

    return 0;
}