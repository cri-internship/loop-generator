#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(150, 130, "random");
	double ***C = create_three_dim_double(90, 480, 890, "random");
	double ***D = create_three_dim_double(920, 30, 760, "random");
	double ***A = create_three_dim_double(990, 470, 900, "random");

	for (int a = 0; a < 916; a++)
	{
	  
	    B[a][a]=D[a][a][a]+B[a][a];
	    C[a][a][a]=D[a+4][a+4][a]-C[a][a][a]+A[a][a][a]*A[a][a][a];
	}

    return 0;
}