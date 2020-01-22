#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(460, "zeros");
	float *B = create_one_dim_float(470, "zeros");

	for (int a = 4; a < 460; a++)
	{
	  
	    A[a]=A[a-4]/0.347;
	  
	    A[a]=B[a]+A[a];
	    B[a]=B[a+1]*0.921;
	}

    return 0;
}