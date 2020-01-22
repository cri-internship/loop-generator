#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(620, "random");
	float **B = create_two_dim_float(460, 440, "random");
	float **A = create_two_dim_float(720, 260, "random");

	for (int a = 3; a < 620; a++)
	{
	  
	    A[a][a]=A[a-3][a-2]+0.288;
	  
	    float var_a=C[a]+0.679;
	    C[a]=0.561;
	}

    return 0;
}