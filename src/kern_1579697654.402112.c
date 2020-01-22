#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(260, 80, "ones");
	double **D = create_two_dim_double(800, 60, "ones");
	double ***C = create_three_dim_double(500, 920, 90, "ones");
	double **B = create_two_dim_double(320, 520, "ones");

	for (int a = 3; a < 260; a++)
	{
	  
	    B[a][a]=B[a][a+3]+0.836;
	  
	    D[a][a]=D[a][a+1]-C[a][a][a];
	  
	    C[a][a][a]=0.693;
	    C[a][a-1][a-2]=0.092;
	  
	    C[a][a][a]=C[a][a][a]/B[a][a]+0.413;
	    B[a][a]=C[a+1][a+1][a+3]/A[a][a]+A[a][a]-D[a][a];
	  
	    A[a][a]=A[a][a]+B[a][a];
	    D[a][a]=A[a-3][a-3]/B[a][a]*C[a][a][a];
	}

    return 0;
}