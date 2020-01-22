#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(610, 540, 990, "random");
	float **A = create_two_dim_float(570, 500, "random");
	float **B = create_two_dim_float(660, 880, "random");

	for (int a = 0; a < 607; a++)
	{
	  
	    C[a][a][a]=A[a][a];
	    C[a+1][a][a+3]=B[a][a];
	}

    return 0;
}