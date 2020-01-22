#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(160, 920, 480, "random");
	float ***C = create_three_dim_float(590, 420, 30, "random");
	float *B = create_one_dim_float(440, "random");
	float **D = create_two_dim_float(720, 260, "random");

	for (int a = 5; a < 160; a++)
	{
	  
	    A[a][a][a]=A[a][a-4][a]-0.831;
	  
	    A[a][a][a]=0.805;
	  
	    C[a][a][a]=B[a]+C[a][a][a]*0.221;
	    D[a][a]=B[a+2]+A[a][a][a]-0.355;
	  
	    float var_a=C[a][a][a]+0.948;
	    float var_b=C[a+1][a+3][a+4]-0.119;
	}

    return 0;
}