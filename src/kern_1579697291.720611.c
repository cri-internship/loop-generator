#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(850, 750, "random");
	float **C = create_two_dim_float(100, 960, "random");
	float **B = create_two_dim_float(190, 420, "random");

	for (int a = 5; a < 100; a++)
	{
	  
	    B[a][a]=B[a-1][a-3]/0.639;
	  
	    B[a][a]=B[a-1][a-2]/0.122;
	  
	    float var_a=C[a][a]/0.78;
	    float var_b=C[a-4][a-5]*0.627;
	}

    return 0;
}