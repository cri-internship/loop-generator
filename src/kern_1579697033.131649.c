#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(840, "random");
	double ***A = create_three_dim_double(630, 770, 990, "random");
	double *B = create_one_dim_double(220, "random");

	for (int a = 4; a < 220; a++)
	{
	  
	    B[a]=B[a-4]/A[a][a][a]*C[a];
	}

    return 0;
}