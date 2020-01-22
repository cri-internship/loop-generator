#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(80, 960, "random");
	double **C = create_two_dim_double(670, 450, "random");
	double ***D = create_three_dim_double(60, 100, 920, "random");
	double **B = create_two_dim_double(430, 870, "random");

	for (int a = 5; a < 56; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-4][a-2]/0.66;
	  
	    D[a][a][a]=D[a-1][a-3][a-5]*0.95;
	  
	    B[a][a]=B[a+5][a]-D[a][a][a]+A[a][a];
	  
	    C[a][a]=C[a][a+2]-B[a][a]+D[a][a][a];
	}

    return 0;
}