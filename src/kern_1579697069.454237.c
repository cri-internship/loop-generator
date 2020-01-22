#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(240, 820, "ones");
	double **A = create_two_dim_double(430, 100, "ones");
	double **B = create_two_dim_double(430, 700, "ones");
	double ***D = create_three_dim_double(310, 400, 770, "ones");

	for (int a = 4; a < 308; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-4][a-3]-0.368;
	  
	    D[a][a][a]=D[a+2][a][a+2]/B[a][a]+A[a][a];
	  
	    A[a][a]=A[a+4][a+1]-C[a][a]/0.016;
	}

    return 0;
}