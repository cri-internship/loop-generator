#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(350, 560, 70, "ones");

	for (int a = 0; a < 345; a++)
	{
	  
	    float var_a=A[a][a][a]-0.526;
	    float var_b=A[a][a+5][a+5]-0.558;
	}

    return 0;
}