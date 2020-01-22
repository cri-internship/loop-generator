#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(670, 100, 120, "ones");
	double **A = create_two_dim_double(140, 320, "ones");

	for (int a = 0; a < 135; a++)
	{
	  
	    A[a][a]=A[a+3][a+5]-0.414;
	}

    return 0;
}