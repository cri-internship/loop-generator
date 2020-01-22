#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(850, 790, 550, "ones");
	float *B = create_one_dim_float(480, "ones");
	float **A = create_two_dim_float(630, 1000, "ones");
	float **D = create_two_dim_float(880, 140, "ones");

	for (int a = 0; a < 475; a++)
	{
	  
	    D[a][a]=D[a+2][a]/0.868;
	  
	    B[a]=C[a][a][a]+A[a][a]-D[a][a];
	    B[a+5]=A[a][a];
	  
	    D[a][a]=D[a][a]*0.489;
	}

    return 0;
}