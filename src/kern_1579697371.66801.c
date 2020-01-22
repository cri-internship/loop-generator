#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(100, "random");
	float ***C = create_three_dim_float(920, 100, 270, "random");
	float **A = create_two_dim_float(160, 780, "random");
	float *D = create_one_dim_float(390, "random");

	for (int a = 4; a < 155; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-2][a-4]+B[a];
	  
	    C[a][a][a]=C[a][a][a-4]-0.39;
	  
	    C[a][a][a]=C[a+5][a+1][a+2]*0.701;
	  
	    D[a]=A[a][a]/C[a][a][a];
	    D[a+5]=0.118;
	  
	    D[a]=A[a][a]+C[a][a][a]-B[a];
	  
	    C[a][a][a]=A[a][a]*D[a]+D[a];
	    D[a]=A[a+5][a+2]+C[a][a][a]*0.126-D[a];
	}

    return 0;
}