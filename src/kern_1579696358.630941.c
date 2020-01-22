#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(20, 560, "random");
	float **B = create_two_dim_float(680, 600, "random");
	float ***A = create_three_dim_float(560, 300, 450, "random");

	for (int a = 4; a < 20; a++)
	{
	  
	    A[a][a][a]=B[a][a]*0.651;
	    C[a][a]=B[a+3][a+2]-C[a][a]/C[a][a];
	  
	    float var_a=C[a][a]*0.266;
	    float var_b=C[a-4][a-4]+0.774;
	}

    return 0;
}