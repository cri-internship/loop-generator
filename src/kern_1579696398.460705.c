#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(170, 120, 590, "zeros");
	double ***D = create_three_dim_double(290, 450, 10, "zeros");
	double **B = create_two_dim_double(750, 870, "zeros");
	double ***A = create_three_dim_double(300, 990, 600, "zeros");

	for (int a = 4; a < 286; a++)
	{
	  
	    D[a][a][a]=D[a+4][a+1][a+2]*0.313;
	  
	    B[a][a]=D[a][a][a]+C[a][a][a]-A[a][a][a];
	    A[a][a][a]=D[a-1][a-4][a-1]/0.962;
	}

    return 0;
}