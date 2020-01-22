#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(840, 80, "random");
	float *A = create_one_dim_float(960, "random");

	for (int a = 5; a < 840; a++)
	{
	  
	    A[a]=A[a-5]+B[a][a];
	  
	    A[a]=A[a+1]*B[a][a];
	  
	    B[a][a]=A[a];
	    B[a-3][a]=A[a];
	}

    return 0;
}