#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(680, 170, 280, "random");
	float **E = create_two_dim_float(690, 250, "random");
	float *C = create_one_dim_float(30, "random");
	float ***D = create_three_dim_float(890, 220, 950, "random");
	float *B = create_one_dim_float(120, "random");

	for (int a = 5; a < 120; a++)
	{
	  
	    E[a][a]=E[a-3][a-2]/0.286*D[a][a][a];
	  
	    E[a][a]=E[a-1][a-2]-0.081;
	  
	    B[a]=0.055;
	    B[a-5]=0.802;
	  
	    E[a][a]=D[a][a][a]*C[a]-E[a][a]+A[a][a][a];
	    A[a][a][a]=D[a][a-5][a]+E[a][a];
	}

    return 0;
}