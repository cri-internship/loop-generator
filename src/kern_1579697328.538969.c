#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(720, 870, "random");
	float ***C = create_three_dim_float(590, 210, 920, "random");
	float **D = create_two_dim_float(10, 320, "random");
	float *B = create_one_dim_float(450, "random");

	for (int a = 4; a < 8; a++)
	{
	  
	    D[a][a]=D[a+2][a+2]*C[a][a][a];
	  
	    C[a][a][a]=C[a+3][a+3][a]/0.303;
	  
	    D[a][a]=A[a][a];
	  
	    B[a]=0.355;
	    B[a-1]=0.109;
	}

    return 0;
}