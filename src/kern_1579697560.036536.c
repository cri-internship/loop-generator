#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(600, 380, "zeros");
	double **B = create_two_dim_double(650, 740, "zeros");
	double ***A = create_three_dim_double(970, 650, 40, "zeros");
	double *C = create_one_dim_double(310, "zeros");

	for (int a = 5; a < 308; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-2][a-1]*C[a]/0.075-D[a][a];
	  
	    B[a][a]=B[a-5][a]*0.167;
	  
	    C[a]=0.371;
	    C[a+2]=D[a][a]*A[a][a][a];
	  
	    A[a][a][a]=B[a][a]/D[a][a]+0.895;
	    C[a]=B[a-2][a-4]-A[a][a][a]*C[a];
	}

    return 0;
}