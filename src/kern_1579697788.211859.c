#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(690, "random");
	double **C = create_two_dim_double(310, 830, "random");
	double ***D = create_three_dim_double(870, 870, 170, "random");
	double *B = create_one_dim_double(590, "random");

	for (int a = 5; a < 690; a++)
	{
	  
	    A[a]=A[a-5]*0.291;
	}

    return 0;
}