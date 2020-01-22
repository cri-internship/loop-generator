#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(160, 100, "ones");
	double *C = create_one_dim_double(890, "ones");
	double **A = create_two_dim_double(480, 770, "ones");

	for (int a = 3; a < 890; a++)
	{
	  
	    C[a]=C[a-3]-B[a][a];
	}

    return 0;
}