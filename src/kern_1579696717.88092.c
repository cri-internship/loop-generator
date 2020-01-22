#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(400, "ones");
	double ***B = create_three_dim_double(780, 940, 950, "ones");

	for (int a = 5; a < 775; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-3][a-3]/0.097;
	  
	    B[a][a][a]=B[a][a][a]+A[a];
	    A[a]=B[a+4][a+1][a+3]*A[a];
	  
	    A[a]=B[a][a][a]*A[a];
	    A[a]=B[a+2][a+1][a+5]*A[a];
	}

    return 0;
}