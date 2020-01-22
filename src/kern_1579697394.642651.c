#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(150, "random");
	double ***B = create_three_dim_double(610, 590, 350, "random");
	double ***C = create_three_dim_double(1000, 120, 210, "random");
	double **D = create_two_dim_double(360, 730, "random");
	double ***A = create_three_dim_double(320, 900, 400, "random");

	for (int a = 3; a < 357; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-3][a-2]-A[a][a][a]+D[a][a];
	  
	    B[a][a][a]=B[a+4][a+4][a]/E[a]*C[a][a][a];
	  
	    B[a][a][a]=D[a][a]-B[a][a][a]*E[a];
	    A[a][a][a]=D[a+1][a+3]/B[a][a][a]-E[a]+C[a][a][a];
	}

    return 0;
}