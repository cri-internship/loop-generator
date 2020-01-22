#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(440, "random");
	float **B = create_two_dim_float(340, 660, "random");

	for (int a = 5; a < 340; a++)
	{
	  
	    float var_a=B[a][a]+0.698;
	    float var_b=B[a-5][a-2]*0.559;
	  
	    float var_c=B[a][a]-0.736;
	    float var_d=B[a-2][a-4]*0.008;
	}

    return 0;
}