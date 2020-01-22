#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(610, "random");
	double *C = create_one_dim_double(920, "random");
	double ***D = create_three_dim_double(640, 610, 520, "random");
	double **A = create_two_dim_double(230, 10, "random");
	double ***B = create_three_dim_double(160, 350, 760, "random");

	for (int a = 5; a < 160; a++)
	{
	  
	    A[a][a]=E[a]/C[a]+B[a][a][a]*D[a][a][a];
	    B[a][a][a]=A[a][a]*B[a][a][a]+D[a][a][a];
	  
	    B[a][a][a]=B[a-5][a-2][a-5]+0.303;
	  
	    E[a]=E[a+1]+A[a][a]*D[a][a][a]/A[a][a];
	  
	    A[a][a]=C[a]+D[a][a][a]*E[a]-A[a][a];
	    E[a]=C[a-5]-D[a][a][a]+B[a][a][a];
	}

    return 0;
}