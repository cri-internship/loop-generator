#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(70, 710, 70, "random");
	double *E = create_one_dim_double(910, "random");
	double *D = create_one_dim_double(600, "random");
	double *A = create_one_dim_double(950, "random");
	double *C = create_one_dim_double(770, "random");

	for (int a = 4; a < 600; a++)
	{
	  
	    E[a]=0.256;
	    E[a+2]=D[a];
	  
	    B[a][a][a]=D[a]+B[a][a][a]*A[a]/E[a]-C[a];
	    A[a]=D[a-4]+C[a];
	}

    return 0;
}