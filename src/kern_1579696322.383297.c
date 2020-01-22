#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(450, 740, "random");
	float *A = create_one_dim_float(930, "random");

	for (int a = 5; a < 450; a++)
	{
	  
	    B[a][a]=B[a-5][a-1]+0.673;
	  
	    A[a]=B[a][a];
	    A[a]=0.559;
	  
	    B[a][a]=0.039;
	}

    return 0;
}