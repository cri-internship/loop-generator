#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(410, 850, "zeros");
	float ***A = create_three_dim_float(830, 200, 920, "zeros");
	float **D = create_two_dim_float(430, 550, "zeros");
	float ***B = create_three_dim_float(140, 880, 230, "zeros");

	for (int a = 5; a < 140; a++)
	{
	  
	    C[a][a]=C[a-1][a-3]/0.969;
	  
	    C[a][a]=C[a+5][a+1]+0.953;
	  
	    A[a][a][a]=A[a+1][a+3][a+4]+0.293*B[a][a][a];
	  
	    float var_a=B[a][a][a]/0.631;
	    float var_b=B[a-4][a-4][a-5]/0.147;
	}

    return 0;
}