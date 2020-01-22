#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(550, 920, 550, "random");
	float **A = create_two_dim_float(660, 350, "random");
	float **C = create_two_dim_float(560, 690, "random");

	for (int a = 4; a < 546; a++)
	{
	  
	    A[a][a]=A[a-1][a-4]/0.151;
	  
	    B[a][a][a]=B[a-4][a-3][a-4]+0.429;
	  
	    B[a][a][a]=B[a-2][a-4][a-1]+0.541;
	  
	    B[a][a][a]=B[a][a+1][a+4]-0.736;
	  
	    C[a][a]=C[a+1][a+3]-B[a][a][a]*A[a][a];
	}

    return 0;
}