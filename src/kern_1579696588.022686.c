#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(990, "ones");
	double **B = create_two_dim_double(840, 550, "ones");

	for (int a = 2; a < 840; a++)
	{
	  
	    B[a][a]=B[a-2][a]+0.906;
	}

    return 0;
}