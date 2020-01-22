#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(790, 630, "random");
	double *A = create_one_dim_double(550, "random");

	for (int a = 0; a < 785; a++)
	{
	  
	    B[a][a]=B[a+5][a+4]-0.469;
	}

    return 0;
}