#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(250, 480, 540, "random");
	double **C = create_two_dim_double(120, 450, "random");
	double *B = create_one_dim_double(650, "random");
	double **A = create_two_dim_double(660, 770, "random");

	for (int a = 4; a < 120; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-3][a-3]/0.274;
	  
	    C[a][a]=D[a][a][a]+A[a][a];
	    C[a-4][a]=B[a]+D[a][a][a];
	  
	    B[a]=C[a][a];
	    B[a]=A[a][a]*D[a][a][a];
	}

    return 0;
}