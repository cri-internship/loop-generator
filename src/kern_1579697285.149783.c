#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(810, "random");
	double ***C = create_three_dim_double(290, 730, 340, "random");
	double *B = create_one_dim_double(920, "random");
	double *A = create_one_dim_double(660, "random");
	double ***E = create_three_dim_double(700, 570, 360, "random");

	for (int a = 5; a < 659; a++)
	{
	  
	    E[a][a][a]=E[a-2][a-1][a-5]*0.115;
	  
	    A[a]=A[a+1]*0.041;
	  
	    D[a]=E[a][a][a]-A[a];
	    D[a]=C[a][a][a]+B[a]-B[a]/0.582;
	  
	    E[a][a][a]=0.33;
	}

    return 0;
}