#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(270, 860, 270, "random");
	double *C = create_one_dim_double(750, "random");
	double **A = create_two_dim_double(150, 590, "random");
	double **D = create_two_dim_double(310, 430, "random");

	for (int a = 0; a < 266; a++)
	{
	  
	    B[a][a][a]=C[a]-D[a][a];
	    C[a]=A[a][a]/0.707-B[a][a][a];
	  
	    B[a][a][a]=C[a]-C[a];
	}

    return 0;
}