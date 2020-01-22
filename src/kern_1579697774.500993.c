#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(400, "zeros");
	double ***A = create_three_dim_double(590, 270, 550, "zeros");

	for (int a = 0; a < 588; a++)
	{
	  
	    A[a][a][a]=A[a][a+2][a+2]/0.354;
	}

    return 0;
}