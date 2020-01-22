#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(920, 590, 10, "random");
	double **B = create_two_dim_double(550, 970, "random");
	double ***D = create_three_dim_double(690, 400, 980, "random");
	double *E = create_one_dim_double(500, "random");
	double *A = create_one_dim_double(640, "random");

	for (int a = 3; a < 500; a++)
	{
	  
	    E[a]=E[a-3]-0.846;
	  
	    C[a][a][a]=C[a-2][a-2][a-2]-D[a][a][a]+B[a][a]/E[a]*A[a];
	  
	    A[a]=A[a+2]/C[a][a][a]-B[a][a]+C[a][a][a];
	}

    return 0;
}