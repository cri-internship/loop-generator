#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(230, 600, "ones");
	double *A = create_one_dim_double(920, "ones");

	for (int a = 5; a < 230; a++)
	{
	  
	    B[a][a]=B[a-5][a-4]+0.602;
	}

    return 0;
}