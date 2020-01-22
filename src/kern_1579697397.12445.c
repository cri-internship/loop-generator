#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(260, 170, "ones");
	float *A = create_one_dim_float(470, "ones");

	for (int a = 5; a < 260; a++)
	{
	  
	    B[a][a]=B[a-5][a-4]-A[a];
	  
	    A[a]=A[a+5]+0.35;
	  
	    A[a]=0.716;
	  
	    B[a][a]=0.4;
	  
	    B[a][a]=A[a]+B[a][a];
	    A[a]=A[a-1]*0.926;
	  
	    float var_b=A[a]+0.919;
	    float var_c=A[a-2]+0.115;
	  
	    A[a]=A[a]/B[a][a];
	}

    return 0;
}