#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(440, "zeros");
	double ***A = create_three_dim_double(150, 360, 900, "zeros");

	for (int a = 4; a < 150; a++)
	{
	  
	    B[a]=B[a-3]+0.209;
	  
	    A[a][a][a]=A[a-3][a-1][a-4]/0.068;
	  
	    B[a]=A[a][a][a];
	  
	    B[a]=B[a+2]/A[a][a][a];
	}

    return 0;
}