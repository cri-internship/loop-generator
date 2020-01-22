#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(390, 420, 320, "zeros");
	float *B = create_one_dim_float(390, "zeros");
	float *A = create_one_dim_float(580, "zeros");
	float *D = create_one_dim_float(920, "zeros");
	float ***C = create_three_dim_float(80, 190, 610, "zeros");

	for (int a = 4; a < 80; a++)
	{
	  
	    E[a][a][a]=E[a+4][a+4][a]-0.978;
	  
	    C[a][a][a]=0.378;
	    C[a-2][a-3][a-4]=0.44;
	  
	    A[a]=A[a]-B[a]/E[a][a][a]+C[a][a][a]*D[a];
	    E[a][a][a]=A[a]*C[a][a][a];
	}

    return 0;
}