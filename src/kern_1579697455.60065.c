#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(720, "random");
	float ***B = create_three_dim_float(70, 760, 630, "random");

	for (int a = 0; a < 66; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+4][a+3]/A[a];
	}

    return 0;
}