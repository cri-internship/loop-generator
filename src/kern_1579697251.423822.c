#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(480, 500, 650, "ones");
	float ***A = create_three_dim_float(920, 1000, 950, "ones");

	for (int a = 5; a < 477; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-2][a]/A[a][a][a];
	  
	    B[a][a][a]=B[a+3][a+1][a+1]-A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a+4][a+5]/0.621;
	  
	    float var_a=A[a][a][a]+0.945;
	    float var_b=A[a][a-4][a-1]/0.774;
	}

    return 0;
}