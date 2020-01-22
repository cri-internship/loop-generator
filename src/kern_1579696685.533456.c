#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(510, 90, 640, "ones");
	double *B = create_one_dim_double(270, "ones");
	double *C = create_one_dim_double(670, "ones");

	for (int a = 0; a < 666; a++)
	{
	  
	    C[a]=C[a+4]+0.744;
	  
	    double var_a=C[a]/0.982;
	    double var_b=C[a+3]+0.934;
	}

    return 0;
}