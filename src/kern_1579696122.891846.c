#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(690, 40, "zeros");
	double **B = create_two_dim_double(360, 320, "zeros");

	for (int a = 0; a < 359; a++)
	{
	  
	    B[a][a]=B[a+1][a]+A[a][a];
	  
	    A[a][a]=A[a+4][a+4]-0.036;
	}

    return 0;
}