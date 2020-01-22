#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(240, "ones");
	float *B = create_one_dim_float(410, "ones");

	for (int a = 4; a < 237; a++)
	{
	  
	    B[a]=B[a-4]/A[a];
	  
	    B[a]=B[a-1]-A[a];
	  
	    A[a]=0.163;
	    A[a+3]=0.051;
	  
	    A[a]=B[a]/0.109;
	    B[a]=B[a+4]*A[a];
	  
	    B[a]=B[a]+A[a];
	}

    return 0;
}