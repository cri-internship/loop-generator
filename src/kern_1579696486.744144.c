#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(150, 240, "ones");
	float ***A = create_three_dim_float(720, 170, 980, "ones");

	for (int a = 5; a < 145; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]+A[a][a][a];
	  
	    A[a][a][a]=A[a-5][a-5][a-5]+B[a][a];
	  
	    B[a][a]=B[a+5][a+1]+A[a][a][a];
	  
	    A[a][a][a]=0.325;
	  
	    float var_a=B[a][a]+0.761;
	    float var_b=B[a-4][a-3]-0.675;
	}

    return 0;
}