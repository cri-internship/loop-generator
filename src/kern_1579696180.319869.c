#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(600, 80, "random");
	double *D = create_one_dim_double(670, "random");
	double ***C = create_three_dim_double(350, 850, 950, "random");
	double ***B = create_three_dim_double(310, 450, 290, "random");

	for (int a = 3; a < 670; a++)
	{
	  
	    D[a]=D[a-3]*C[a][a][a]-A[a][a]/B[a][a][a];
	}

    return 0;
}