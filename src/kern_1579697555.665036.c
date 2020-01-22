#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(860, 610, 610, "random");

	for (int a = 3; a < 860; a++)
	{
	  
	    float var_a=A[a][a][a]+0.314;
	    float var_b=A[a-3][a-3][a]/0.028;
	}

    return 0;
}