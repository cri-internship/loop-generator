#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(760, 710, 440, "random");
	float ***A = create_three_dim_float(830, 900, 900, "random");
	float *C = create_one_dim_float(10, "random");

	for (int a = 0; a < 7; a++)
	{
	  
	    float var_a=C[a]*0.058;
	    C[a]=0.934;
	  
	    B[a][a][a]=B[a+2][a+3][a+2]*0.985;
	  
	    C[a]=C[a+3]/0.285;
	}

    return 0;
}