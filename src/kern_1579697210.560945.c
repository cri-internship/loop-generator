#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(920, 460, 320, "random");
	double *B = create_one_dim_double(460, "random");
	double ***C = create_three_dim_double(660, 20, 700, "random");

	for (int a = 4; a < 460; a++)
	{
	  
	    A[a][a][a]=A[a+1][a][a]+C[a][a][a]-B[a];
	  
	    B[a]=A[a][a][a]/C[a][a][a];
	    B[a-4]=C[a][a][a];
	}

    return 0;
}