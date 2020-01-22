#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(810, 10, 860, "random");
	float ***E = create_three_dim_float(370, 800, 160, "random");
	float ***C = create_three_dim_float(440, 850, 520, "random");
	float **A = create_two_dim_float(620, 910, "random");
	float *D = create_one_dim_float(160, "random");

	for (int a = 5; a < 156; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-3][a-3]*D[a];
	  
	    C[a][a][a]=C[a-3][a-1][a-4]+0.172;
	  
	    D[a]=D[a+3]/B[a][a][a]+0.4*C[a][a][a];
	  
	    C[a][a][a]=A[a][a];
	  
	    D[a]=E[a][a][a];
	}

    return 0;
}