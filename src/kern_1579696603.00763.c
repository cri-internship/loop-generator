#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(550, "random");
	float *B = create_one_dim_float(640, "random");

	for (int a = 5; a < 549; a++)
	{
	  
	    A[a]=A[a+1]+0.914;
	  
	    B[a]=0.798;
	    B[a+5]=0.368;
	  
	    B[a]=0.296;
	  
	    A[a]=B[a]*A[a];
	    B[a]=B[a-5]/A[a];
	  
	    float var_a=B[a]*0.248;
	}

    return 0;
}