#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(400, 380, 500, "ones");
	float **A = create_two_dim_float(10, 960, "ones");
	float ***B = create_three_dim_float(800, 450, 160, "ones");
	float **C = create_two_dim_float(730, 960, "ones");

	for (int a = 0; a < 7; a++)
	{
	  
	    A[a][a]=A[a+3][a]/C[a][a]*D[a][a][a]+B[a][a][a];
	}

    return 0;
}