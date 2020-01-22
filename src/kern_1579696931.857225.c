#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(210, 30, "random");
	float ***A = create_three_dim_float(990, 580, 220, "random");

	for (int a = 5; a < 206; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-2][a]+0.81;
	  
	    A[a][a][a]=A[a-3][a-4][a-1]-0.337;
	  
	    A[a][a][a]=A[a-3][a][a-2]*0.037;
	  
	    A[a][a][a]=A[a-3][a-5][a-2]/B[a][a];
	  
	    B[a][a]=B[a][a-5]-A[a][a][a];
	  
	    B[a][a]=B[a+1][a+1]+0.805;
	}

    return 0;
}