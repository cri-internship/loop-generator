#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(150, "ones");
	float ***D = create_three_dim_float(830, 250, 190, "ones");
	float ***B = create_three_dim_float(570, 280, 270, "ones");
	float ***C = create_three_dim_float(410, 180, 820, "ones");

	for (int a = 3; a < 150; a++)
	{
	  
	    C[a][a][a]=C[a][a][a-3]-0.246;
	  
	    float var_a=A[a]-0.425;
	    float var_b=A[a-2]/0.762;
	  
	    float var_c=C[a][a][a]+0.862;
	    float var_d=C[a+4][a+2][a+3]-0.401;
	}

    return 0;
}