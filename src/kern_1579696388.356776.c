#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(1000, 580, "zeros");
	float ***B = create_three_dim_float(630, 910, 380, "zeros");
	float ***A = create_three_dim_float(880, 140, 720, "zeros");

	for (int a = 4; a < 626; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-3][a-3]-C[a][a];
	  
	    A[a][a][a]=A[a][a+2][a+2]+B[a][a][a]-B[a][a][a];
	  
	    C[a][a]=C[a+2][a+4]*0.982;
	  
	    B[a][a][a]=B[a+1][a][a+4]+0.117;
	  
	    B[a][a][a]=A[a][a][a]+B[a][a][a]*C[a][a];
	    A[a][a][a]=A[a+4][a+1][a+2]/B[a][a][a];
	}

    return 0;
}