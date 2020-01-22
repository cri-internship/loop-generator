#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(250, "random");
	float *B = create_one_dim_float(660, "random");

	for (int a = 4; a < 246; a++)
	{
	  
	    A[a]=A[a+4]*0.816;
	  
	    A[a]=0.278;
	  
	    B[a]=A[a];
	    B[a-4]=A[a];
	}

    return 0;
}