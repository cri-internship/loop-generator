#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(290, 1000, "ones");
	float ***C = create_three_dim_float(600, 400, 250, "ones");
	float **D = create_two_dim_float(780, 430, "ones");
	float *B = create_one_dim_float(450, "ones");

	for (int a = 5; a < 600; a++)
	{
	  
	    C[a][a][a]=D[a][a];
	    C[a-2][a-4][a-5]=A[a][a]*B[a]-0.242;
	}

    return 0;
}