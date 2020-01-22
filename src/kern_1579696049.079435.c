#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(140, 950, "random");
	float ***A = create_three_dim_float(670, 700, 240, "random");

	for (int a = 5; a < 136; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-5][a-1]/0.297;
	  
	    B[a][a]=B[a-1][a-5]-A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a][a+2]/B[a][a];
	  
	    B[a][a]=B[a+4][a+3]*0.198;
	  
	    float var_a=A[a][a][a]/0.967;
	    float var_b=A[a+2][a][a+3]+0.13;
	  
	    A[a][a][a]=B[a][a]+A[a][a][a];
	    B[a][a]=B[a-2][a-2]*0.953;
	}

    return 0;
}