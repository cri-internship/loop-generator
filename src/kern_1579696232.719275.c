#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(50, "zeros");
	float **B = create_two_dim_float(580, 750, "zeros");

	for (int a = 0; a < 575; a++)
	{
	  
	    B[a][a]=B[a+5][a+1]+0.827;
	  
	    B[a][a]=B[a+5][a]/0.14;
	}

    return 0;
}