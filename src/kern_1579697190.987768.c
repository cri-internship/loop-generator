#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(50, 440, "random");
	float ***A = create_three_dim_float(410, 900, 200, "random");

	for (int a = 3; a < 50; a++)
	{
	  
	    B[a][a]=0.669;
	    float  var_a=B[a][a]/0.699;
	  
	    float var_b=A[a][a][a]/0.398;
	    float var_c=A[a-2][a-2][a-3]*0.466;
	}

    return 0;
}