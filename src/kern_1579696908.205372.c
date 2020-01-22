#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(600, 320, "random");
	float ***C = create_three_dim_float(440, 240, 660, "random");
	float **B = create_two_dim_float(490, 270, "random");

	for (int a = 3; a < 486; a++)
	{
	  
	    B[a][a]=B[a+4][a+2]-0.448;
	  
	    A[a][a]=C[a][a][a]+B[a][a];
	    A[a-3][a]=0.87;
	  
	    C[a][a][a]=A[a][a]/B[a][a];
	    A[a][a]=A[a+2][a+5]+B[a][a]*C[a][a][a];
	}

    return 0;
}