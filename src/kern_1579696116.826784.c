#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(860, "ones");
	float *B = create_one_dim_float(580, "ones");

	for (int a = 2; a < 577; a++)
	{
	  
	    A[a]=A[a-2]+B[a];
	  
	    float  var_a=A[a]/0.693;
	  
	    A[a]=A[a+5]+0.745;
	  
	    B[a]=0.703;
	    B[a+3]=0.167;
	  
	    A[a]=B[a]-0.279;
	    A[a]=B[a+3]+0.167;
	}

    return 0;
}