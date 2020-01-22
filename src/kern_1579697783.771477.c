#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(350, "zeros");
	float *A = create_one_dim_float(490, "zeros");

	for (int a = 3; a < 350; a++)
	{
	  
	    B[a]=0.302;
	    float  var_a=B[a]/0.693;
	  
	    A[a]=A[a-1]-B[a];
	  
	    A[a]=B[a];
	  
	    B[a]=A[a]+B[a];
	    A[a]=A[a+3]/B[a];
	  
	    A[a]=B[a]*0.584;
	    B[a]=B[a-3]+0.248;
	  
	    B[a]=A[a]+B[a];
	    B[a]=A[a-3]/B[a];
	  
	    float var_b=A[a]-0.086;
	    float var_c=A[a+2]/0.366;
	}

    return 0;
}