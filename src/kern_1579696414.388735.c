#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(650, "random");
	double **D = create_two_dim_double(590, 970, "random");
	double **A = create_two_dim_double(670, 380, "random");
	double **C = create_two_dim_double(960, 600, "random");

	for (int a = 5; a < 650; a++)
	{
	  
	    A[a][a]=A[a-2][a]-0.016;
	  
	    C[a][a]=C[a][a]-D[a][a]/A[a][a]*0.861;
	    C[a][a]=D[a][a];
	  
	    B[a]=0.731;
	    B[a-5]=0.7;
	  
	    D[a][a]=A[a][a]/C[a][a]+0.154*B[a];
	    A[a][a]=A[a-3][a-3]*B[a]+D[a][a];
	}

    return 0;
}