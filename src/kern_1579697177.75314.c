#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(380, "ones");
	float **A = create_two_dim_float(250, 310, "ones");

	for (int a = 1; a < 245; a++)
	{
	  
	    B[a]=0.737;
	    B[a+3]=0.633;
	  
	    A[a][a]=B[a];
	    A[a][a-1]=0.845;
	  
	    B[a]=A[a][a]*B[a];
	    A[a][a]=A[a+4][a+3]*B[a];
	  
	    float var_a=A[a][a]+0.57;
	    float var_b=A[a+5][a+5]+0.57;
	}

    return 0;
}