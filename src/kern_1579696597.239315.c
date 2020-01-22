#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(830, 380, 40, "ones");
	float *B = create_one_dim_float(960, "ones");

	for (int a = 2; a < 825; a++)
	{
	  
	    A[a][a][a]=A[a][a-2][a-1]/0.159;
	  
	    float var_a=B[a]+0.997;
	    float var_b=B[a+1]-0.799;
	  
	    B[a]=A[a][a][a]-B[a];
	    A[a][a][a]=A[a+5][a+3][a+4]*B[a];
	}

    return 0;
}