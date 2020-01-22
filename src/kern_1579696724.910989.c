#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(540, 530, "zeros");
	float *D = create_one_dim_float(150, "zeros");
	float *B = create_one_dim_float(330, "zeros");
	float ***E = create_three_dim_float(490, 620, 680, "zeros");
	float **A = create_two_dim_float(910, 490, "zeros");

	for (int a = 0; a < 150; a++)
	{
	  
	    D[a]=E[a][a][a]/A[a][a]*C[a][a];
	    C[a][a]=D[a]+B[a];
	}

    return 0;
}