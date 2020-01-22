#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(990, 50, 640, "zeros");
	float *B = create_one_dim_float(540, "zeros");
	float **D = create_two_dim_float(210, 320, "zeros");
	float **C = create_two_dim_float(40, 370, "zeros");

	for (int a = 0; a < 206; a++)
	{
	  
	    D[a][a]=D[a+1][a+2]-0.32;
	  
	    float var_a=D[a][a]-0.418;
	    float var_b=D[a+4][a+4]*0.888;
	}

    return 0;
}