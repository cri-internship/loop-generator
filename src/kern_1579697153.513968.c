#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(640, 900, 750, "random");
	double ***C = create_three_dim_double(40, 200, 820, "random");
	double *B = create_one_dim_double(860, "random");

	for (int a = 4; a < 36; a++)
	{
	  
	    C[a][a][a]=C[a][a-3][a-2]/A[a][a][a]+B[a];
	  
	    C[a][a][a]=C[a-3][a][a-4]/A[a][a][a]-B[a];
	  
	    B[a]=B[a+1]-C[a][a][a];
	  
	    double var_a=C[a][a][a]+0.576;
	    double var_b=C[a+4][a+1][a+1]/0.677;
	}

    return 0;
}