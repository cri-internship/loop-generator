#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(140, "zeros");
	float ***A = create_three_dim_float(580, 870, 500, "zeros");

	for (int a = 5; a < 140; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-2][a-2]/B[a];
	  
	    A[a][a][a]=A[a][a+4][a+3]+0.978;
	  
	    float var_a=A[a][a][a]*0.131;
	    float var_b=A[a-4][a-3][a-4]+0.116;
	  
	    float var_c=B[a]/0.698;
	    float var_d=B[a-5]/0.314;
	}

    return 0;
}