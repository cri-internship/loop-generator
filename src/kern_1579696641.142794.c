#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(300, 20, 420, "zeros");
	float **B = create_two_dim_float(880, 710, "zeros");
	float *A = create_one_dim_float(210, "zeros");

	for (int a = 2; a < 295; a++)
	{
	  
	    B[a][a]=B[a][a-2]-0.706;
	  
	    B[a][a]=B[a][a+5]+0.716;
	  
	    B[a][a]=B[a+3][a+1]-0.815;
	  
	    C[a][a][a]=C[a+5][a+4][a+2]*0.732;
	  
	    float var_a=B[a][a]*0.708;
	    float var_b=B[a+3][a+3]*0.896;
	  
	    float var_c=B[a][a]/0.601;
	    float var_d=B[a][a+2]/0.327;
	}

    return 0;
}