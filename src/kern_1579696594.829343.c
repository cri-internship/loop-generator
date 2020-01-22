#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(630, 840, 380, "zeros");
	double **C = create_two_dim_double(930, 690, "zeros");
	double *A = create_one_dim_double(310, "zeros");

	for (int a = 4; a < 309; a++)
	{
	  
	    C[a][a]=C[a-3][a-2]/0.27;
	  
	    C[a][a]=C[a-4][a-3]+B[a][a][a]-A[a];
	  
	    A[a]=A[a+1]-0.504;
	  
	    B[a][a][a]=B[a+1][a+3][a+1]-0.989;
	  
	    B[a][a][a]=B[a+2][a][a]/0.21;
	  
	    C[a][a]=C[a][a]-A[a];
	    A[a]=C[a+5][a+1]*A[a];
	}

    return 0;
}