#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(530, "random");
	float *B = create_one_dim_float(990, "random");

	for (int a = 4; a < 530; a++)
	{
	  
	    B[a]=0.253;
	    float  var_a=B[a]+0.053;
	  
	    B[a]=B[a]-A[a];
	    B[a]=A[a];
	  
	    B[a]=B[a+5]-0.127;
	  
	    A[a]=0.241;
	    A[a-4]=0.021;
	  
	    A[a]=B[a]-A[a];
	    B[a]=B[a-3]*A[a];
	}

    return 0;
}