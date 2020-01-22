#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(120, 360, 930, "random");
	double *C = create_one_dim_double(970, "random");
	double ***D = create_three_dim_double(20, 220, 390, "random");
	double **B = create_two_dim_double(490, 10, "random");

	for (int a = 3; a < 15; a++)
	{
	  
	    C[a]=C[a-3]/A[a][a][a]*D[a][a][a]-B[a][a];
	  
	    D[a][a][a]=D[a+5][a+2][a+3]*C[a]+A[a][a][a]-B[a][a];
	  
	    double var_a=D[a][a][a]+0.088;
	    double var_b=D[a-1][a-2][a-1]-0.871;
	}

    return 0;
}