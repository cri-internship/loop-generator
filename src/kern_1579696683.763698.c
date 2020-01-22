#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(600, "random");
	double ***A = create_three_dim_double(710, 430, 800, "random");

	for (int a = 2; a < 710; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-1][a]/0.344;
	  
	    A[a][a][a]=A[a][a-2][a-2]*0.046;
	}

    return 0;
}