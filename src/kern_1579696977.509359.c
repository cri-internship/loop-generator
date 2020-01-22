#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(220, "ones");
	double *B = create_one_dim_double(250, "ones");
	double ***A = create_three_dim_double(150, 730, 500, "ones");

	for (int a = 3; a < 146; a++)
	{
	  
	    A[a][a][a]=A[a+4][a+4][a+2]*C[a]-B[a];
	  
	    A[a][a][a]=B[a]/A[a][a][a];
	    B[a]=B[a-3]/0.266-C[a];
	}

    return 0;
}