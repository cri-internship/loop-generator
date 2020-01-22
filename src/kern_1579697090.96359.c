#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(610, 410, "zeros");
	float **E = create_two_dim_float(660, 150, "zeros");
	float **A = create_two_dim_float(150, 610, "zeros");
	float **C = create_two_dim_float(640, 620, "zeros");
	float **D = create_two_dim_float(500, 830, "zeros");

	for (int a = 4; a < 610; a++)
	{
	  
	    B[a][a]=0.679+E[a][a]-D[a][a];
	    B[a-4][a-4]=A[a][a]+D[a][a]-0.45;
	}

    return 0;
}