#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(920, 360, 840, "random");
	float **A = create_two_dim_float(530, 200, "random");
	float **B = create_two_dim_float(370, 30, "random");

	for (int a = 4; a < 366; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-2][a-4]*B[a][a]/A[a][a];
	  
	    C[a][a][a]=C[a-3][a][a-4]*A[a][a]+B[a][a];
	  
	    C[a][a][a]=C[a+1][a+3][a+4]+0.371;
	  
	    C[a][a][a]=C[a+5][a+4][a+3]-B[a][a]/A[a][a];
	  
	    B[a][a]=0.018;
	    B[a+3][a+4]=0.052;
	  
	    B[a][a]=0.376;
	  
	    B[a][a]=C[a][a][a]-B[a][a]/A[a][a];
	    A[a][a]=C[a+4][a][a+5]/A[a][a]+B[a][a];
	}

    return 0;
}