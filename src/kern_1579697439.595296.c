#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(920, 350, "random");
	double *B = create_one_dim_double(40, "random");
	double ***D = create_three_dim_double(590, 510, 290, "random");
	double *E = create_one_dim_double(60, "random");
	double **A = create_two_dim_double(910, 220, "random");

	for (int a = 5; a < 40; a++)
	{
	  
	    B[a]=B[a-4]*D[a][a][a]-0.903+E[a]/A[a][a];
	  
	    E[a]=E[a+3]-0.45;
	  
	    D[a][a][a]=0.711;
	    D[a-3][a-5][a-2]=0.37;
	  
	    A[a][a]=0.3;
	    A[a][a+2]=0.054;
	  
	    B[a]=E[a]-B[a]+B[a];
	    A[a][a]=E[a+4]-D[a][a][a]/B[a]*C[a][a];
	}

    return 0;
}