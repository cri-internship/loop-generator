#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(630, 60, 520, "random");
	double *C = create_one_dim_double(20, "random");
	double ***B = create_three_dim_double(430, 280, 40, "random");

	for (int a = 4; a < 430; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-4][a-4]*C[a]+A[a][a][a];
	  
	    A[a][a][a]=A[a-4][a-2][a-4]/0.032;
	}

    return 0;
}