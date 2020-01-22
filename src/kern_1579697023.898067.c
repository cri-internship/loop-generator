#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(250, 190, "random");
	double *A = create_one_dim_double(420, "random");
	double ***D = create_three_dim_double(210, 900, 870, "random");
	double *B = create_one_dim_double(120, "random");

	for (int a = 5; a < 120; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-5][a-4]*0.672;
	  
	    C[a][a]=C[a+5][a+1]*D[a][a][a]+A[a]/B[a];
	  
	    double var_a=B[a]-0.38;
	    double var_b=B[a-2]/0.107;
	}

    return 0;
}