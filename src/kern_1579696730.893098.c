#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(10, 310, "zeros");
	float **C = create_two_dim_float(760, 150, "zeros");
	float *D = create_one_dim_float(260, "zeros");
	float ***A = create_three_dim_float(360, 430, 510, "zeros");
	float ***E = create_three_dim_float(390, 110, 540, "zeros");

	for (int a = 2; a < 390; a++)
	{
	  
	    E[a][a][a]=E[a-1][a][a-2]-D[a]*A[a][a][a]+B[a][a];
	}

    return 0;
}