#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(780, 20, "ones");
	double **A = create_two_dim_double(20, 940, "ones");

	for (int a = 0; a < 775; a++)
	{
	  
	    B[a][a]=A[a][a];
	    B[a+2][a+5]=0.645;
	}

    return 0;
}