#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(700, 560, 580, "random");
	float **A = create_two_dim_float(920, 750, "random");
	float **B = create_two_dim_float(480, 1000, "random");

	for (int a = 2; a < 477; a++)
	{
	  
	    A[a][a]=A[a-2][a-1]+0.742;
	  
	    B[a][a]=B[a+3][a+3]/0.928;
	  
	    A[a][a]=0.165;
	  
	    C[a][a][a]=B[a][a]-A[a][a];
	    C[a+1][a+4][a]=0.194;
	  
	    B[a][a]=0.425;
	}

    return 0;
}