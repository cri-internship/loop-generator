#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(400, "zeros");
	double ***C = create_three_dim_double(630, 610, 320, "zeros");
	double *A = create_one_dim_double(310, "zeros");
	double *B = create_one_dim_double(320, "zeros");

	for (int a = 4; a < 308; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-4][a]-0.336;
	  
	    A[a]=A[a-4]/C[a][a][a]-D[a];
	  
	    C[a][a][a]=A[a]/0.986;
	    B[a]=A[a+2]*C[a][a][a]+0.895/B[a];
	}

    return 0;
}