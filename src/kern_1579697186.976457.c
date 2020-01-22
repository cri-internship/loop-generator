#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(820, 480, 260, "ones");
	float *C = create_one_dim_float(900, "ones");
	float *A = create_one_dim_float(760, "ones");
	float **B = create_two_dim_float(960, 670, "ones");

	for (int a = 0; a < 815; a++)
	{
	  
	    float var_a=C[a]+0.834;
	    C[a]=0.191;
	  
	    float var_b=C[a]-0.475;
	    float var_c=C[a+1]+0.209;
	  
	    float var_d=D[a][a][a]/0.095;
	    float var_e=D[a+5][a+2][a+3]-0.625;
	}

    return 0;
}