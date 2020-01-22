#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(200, "random");
	double ***E = create_three_dim_double(960, 600, 630, "random");
	double **A = create_two_dim_double(960, 320, "random");
	double **D = create_two_dim_double(160, 70, "random");
	double ***B = create_three_dim_double(870, 40, 80, "random");

	for (int a = 0; a < 868; a++)
	{
	  
	    A[a][a]=A[a+3][a+2]*0.761;
	  
	    B[a][a][a]=E[a][a][a]+A[a][a];
	    B[a+2][a+2][a+2]=D[a][a]+C[a]*D[a][a];
	}

    return 0;
}