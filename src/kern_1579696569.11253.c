#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(340, 780, 940, "ones");
	float **A = create_two_dim_float(590, 770, "ones");
	float **C = create_two_dim_float(620, 640, "ones");
	float *D = create_one_dim_float(370, "ones");

	for (int a = 4; a < 336; a++)
	{
	  
	    float var_a=B[a][a][a]*0.671;
	    float var_b=B[a+1][a+4][a+2]/0.969;
	  
	    float var_c=A[a][a]-0.899;
	    float var_d=A[a-4][a-4]+0.442;
	}

    return 0;
}