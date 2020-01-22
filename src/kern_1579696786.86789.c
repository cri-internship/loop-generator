#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(760, 30, "ones");
	double *B = create_one_dim_double(270, "ones");
	double ***C = create_three_dim_double(110, 880, 360, "ones");

	for (int a = 3; a < 108; a++)
	{
	  
	    A[a][a]=A[a-3][a-3]/0.507;
	  
	    C[a][a][a]=B[a]+A[a][a];
	    C[a+2][a+1][a+2]=B[a]*A[a][a];
	}

    return 0;
}