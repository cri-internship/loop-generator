#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 740, "zeros");
	float **A = create_two_dim_float(670, 700, "zeros");

	for (int a = 5; a < 670; a++)
	{
	  
	    A[a][a]=B[a][a];
	    A[a-5][a-2]=B[a][a];
	  
	    A[a][a]=0.531;
	  
	    float var_a=B[a][a]-0.69;
	    float var_b=B[a+4][a+2]-0.137;
	  
	    B[a][a]=B[a][a]+A[a][a];
	    A[a][a]=B[a+5][a]+A[a][a];
	}

    return 0;
}