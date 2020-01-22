#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(320, 260, "zeros");
	double **E = create_two_dim_double(520, 670, "zeros");
	double ***A = create_three_dim_double(200, 100, 110, "zeros");
	double **D = create_two_dim_double(490, 960, "zeros");
	double *C = create_one_dim_double(980, "zeros");

	for (int a = 4; a < 196; a++)
	{
	  
	    E[a][a]=E[a-4][a-4]*C[a]+A[a][a][a];
	  
	    B[a][a]=B[a+4][a+3]*0.389;
	  
	    E[a][a]=E[a+1][a+1]-0.697;
	  
	    A[a][a][a]=0.497;
	    A[a+4][a+3][a+3]=0.573;
	  
	    C[a]=0.252;
	    C[a-2]=0.026;
	}

    return 0;
}