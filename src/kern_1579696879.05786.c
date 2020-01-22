#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(900, "random");
	float ***A = create_three_dim_float(40, 750, 340, "random");
	float ***B = create_three_dim_float(390, 170, 50, "random");

	for (int a = 5; a < 385; a++)
	{
	  
	    C[a]=C[a-1]-A[a][a][a]*B[a][a][a];
	  
	    B[a][a][a]=B[a-4][a-5][a-1]+0.943;
	  
	    C[a]=C[a-3]*0.291;
	  
	    B[a][a][a]=B[a+2][a+3][a+3]+0.041;
	  
	    B[a][a][a]=B[a+2][a+4][a+3]-C[a]+C[a];
	  
	    float var_a=B[a][a][a]/0.322;
	    float var_b=B[a-3][a-3][a-3]*0.537;
	}

    return 0;
}