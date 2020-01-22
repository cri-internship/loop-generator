#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(370, 490, "random");
	double ***C = create_three_dim_double(710, 560, 430, "random");
	double **B = create_two_dim_double(700, 200, "random");
	double **A = create_two_dim_double(80, 230, "random");

	for (int a = 5; a < 370; a++)
	{
	  
	    D[a][a]=D[a-5][a-4]-0.418*C[a][a][a];
	  
	    B[a][a]=B[a-3][a-5]/A[a][a]*D[a][a];
	  
	    C[a][a][a]=C[a+4][a+2][a+2]+0.205;
	  
	    B[a][a]=0.042;
	  
	    D[a][a]=0.981/B[a][a]*C[a][a][a];
	  
	    A[a][a]=C[a][a][a]+B[a][a]*0.821-D[a][a];
	    D[a][a]=C[a+4][a+4][a+4]-D[a][a]*B[a][a];
	}

    return 0;
}