#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(370, 930, "random");
	float ***C = create_three_dim_float(800, 310, 870, "random");
	float *D = create_one_dim_float(540, "random");
	float ***B = create_three_dim_float(930, 740, 250, "random");

	for (int a = 0; a < 365; a++)
	{
	  
	    C[a][a][a]=C[a+5][a+3][a+2]-D[a]/0.598;
	  
	    B[a][a][a]=B[a+1][a+1][a+5]-0.935;
	  
	    B[a][a][a]=B[a+4][a][a+2]-0.418;
	  
	    A[a][a]=A[a+5][a+4]/0.629;
	  
	    D[a]=D[a]+B[a][a][a]*B[a][a][a]/A[a][a];
	    C[a][a][a]=D[a+4]/B[a][a][a];
	}

    return 0;
}