#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(560, 840, "zeros");
	float *A = create_one_dim_float(710, "zeros");

	for (int a = 0; a < 555; a++)
	{
	  
	    B[a][a]=B[a+1][a+5]+0.588;
	  
	    B[a][a]=B[a+3][a+3]+0.635;
	}

    return 0;
}