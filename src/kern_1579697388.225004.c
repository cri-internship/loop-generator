#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(310, 990, "random");
	double *B = create_one_dim_double(330, "random");
	double ***C = create_three_dim_double(580, 680, 660, "random");
	double **A = create_two_dim_double(470, 900, "random");
	double ***E = create_three_dim_double(720, 80, 580, "random");

	for (int a = 5; a < 470; a++)
	{
	  
	    A[a][a]=A[a-5][a-5]*D[a][a]-E[a][a][a];
	  
	    E[a][a][a]=E[a+5][a+1][a+4]*C[a][a][a]-0.804/B[a]+C[a][a][a];
	}

    return 0;
}