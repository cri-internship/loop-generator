#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(500, 140, "zeros");
	float **D = create_two_dim_float(230, 870, "zeros");
	float ***B = create_three_dim_float(230, 60, 960, "zeros");
	float **C = create_two_dim_float(780, 1000, "zeros");

	for (int a = 0; a < 775; a++)
	{
	  
	    C[a][a]=B[a][a][a];
	    C[a+5][a]=D[a][a]+A[a][a];
	}

    return 0;
}