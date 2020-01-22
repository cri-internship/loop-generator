#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(630, 100, "random");
	float **A = create_two_dim_float(960, 600, "random");
	float ***B = create_three_dim_float(830, 880, 930, "random");

	for (int a = 5; a < 629; a++)
	{
	  
	    A[a][a]=A[a][a-4]-C[a][a]/B[a][a][a];
	  
	    B[a][a][a]=B[a-2][a-1][a-1]-0.818;
	  
	    A[a][a]=A[a-5][a]-0.999;
	  
	    C[a][a]=C[a][a+1]*A[a][a]-B[a][a][a];
	  
	    A[a][a]=A[a+3][a+2]*0.638;
	}

    return 0;
}