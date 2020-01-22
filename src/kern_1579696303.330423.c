#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(880, "zeros");
	float **A = create_two_dim_float(400, 20, "zeros");
	float ***C = create_three_dim_float(560, 220, 240, "zeros");

	for (int a = 4; a < 556; a++)
	{
	  
	    C[a][a][a]=C[a+3][a+4][a+1]-B[a];
	  
	    C[a][a][a]=B[a]*C[a][a][a]/A[a][a];
	    B[a]=B[a-4]*C[a][a][a]-0.863;
	}

    return 0;
}