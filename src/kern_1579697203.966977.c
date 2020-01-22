#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(530, "zeros");
	double **B = create_two_dim_double(400, 860, "zeros");
	double ***C = create_three_dim_double(310, 520, 140, "zeros");

	for (int a = 5; a < 307; a++)
	{
	  
	    C[a][a][a]=C[a+1][a+3][a+3]*B[a][a];
	  
	    C[a][a][a]=0.772/A[a];
	  
	    B[a][a]=0.453;
	    B[a-3][a-2]=0.03;
	  
	    C[a][a][a]=C[a][a][a]+B[a][a]-A[a];
	    A[a]=C[a-2][a-5][a-4]/B[a][a]+A[a];
	  
	    B[a][a]=A[a]*C[a][a][a]+B[a][a];
	    A[a]=A[a-4]-C[a][a][a];
	}

    return 0;
}