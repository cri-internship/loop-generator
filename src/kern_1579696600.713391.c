#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(420, 420, 980, "ones");
	double ***D = create_three_dim_double(60, 180, 570, "ones");
	double **A = create_two_dim_double(310, 150, "ones");
	double *C = create_one_dim_double(300, "ones");

	for (int a = 4; a < 60; a++)
	{
	  
	    A[a][a]=A[a+5][a+4]*0.386;
	  
	    B[a][a][a]=D[a][a][a]/B[a][a][a];
	    C[a]=D[a-1][a-4][a-2]+A[a][a];
	}

    return 0;
}