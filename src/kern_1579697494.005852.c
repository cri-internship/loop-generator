#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(460, 470, 410, "ones");
	float ***C = create_three_dim_float(810, 80, 280, "ones");
	float ***D = create_three_dim_float(70, 840, 160, "ones");
	float *A = create_one_dim_float(650, "ones");

	for (int a = 5; a < 460; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-2][a]/A[a]*C[a][a][a]+D[a][a][a];
	  
	    C[a][a][a]=C[a-3][a-1][a-5]+0.797;
	}

    return 0;
}