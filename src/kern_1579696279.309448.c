#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(860, 610, 440, "ones");
	float *B = create_one_dim_float(290, "ones");

	for (int a = 0; a < 288; a++)
	{
	  
	    B[a]=B[a+2]*0.73;
	  
	    B[a]=A[a][a][a];
	}

    return 0;
}