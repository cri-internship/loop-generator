#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(210, "random");
	double **B = create_two_dim_double(10, 530, "random");
	double *A = create_one_dim_double(350, "random");
	double ***D = create_three_dim_double(10, 830, 790, "random");
	double *C = create_one_dim_double(110, "random");

	for (int a = 5; a < 5; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-5][a-5]-E[a];
	  
	    D[a][a][a]=D[a+3][a+5][a+4]+B[a][a];
	  
	    C[a]=C[a+2]+0.311;
	  
	    B[a][a]=D[a][a][a]+0.459/A[a]-D[a][a][a];
	    B[a+1][a+2]=A[a]/0.951-C[a]+D[a][a][a];
	}

    return 0;
}