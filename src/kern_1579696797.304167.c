#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(550, 760, 470, "ones");
	float *C = create_one_dim_float(280, "ones");
	float **A = create_two_dim_float(560, 830, "ones");

	for (int a = 4; a < 275; a++)
	{
	  
	    B[a][a][a]=B[a][a-4][a-1]*0.705;
	  
	    C[a]=C[a+5]+0.265*A[a][a];
	  
	    float var_a=C[a]+0.046;
	    float var_b=C[a+2]-0.022;
	  
	    C[a]=A[a][a]*C[a]/C[a];
	    B[a][a][a]=A[a-4][a-4]-B[a][a][a]+C[a];
	}

    return 0;
}