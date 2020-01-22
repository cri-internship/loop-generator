#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(340, 670, 920, "ones");
	float **B = create_two_dim_float(80, 70, "ones");

	for (int a = 5; a < 78; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-4][a-3]+0.323;
	  
	    B[a][a]=B[a-5][a-3]/A[a][a][a];
	  
	    A[a][a][a]=B[a][a];
	  
	    float var_a=B[a][a]/0.279;
	    float var_b=B[a-3][a-2]/0.195;
	  
	    B[a][a]=B[a][a]+A[a][a][a];
	    A[a][a][a]=B[a+2][a]-A[a][a][a];
	  
	    A[a][a][a]=B[a][a]*A[a][a][a];
	    A[a][a][a]=B[a-1][a-2]+A[a][a][a];
	}

    return 0;
}