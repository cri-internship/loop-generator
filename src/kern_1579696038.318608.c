#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(80, "random");
	float *D = create_one_dim_float(680, "random");
	float ***C = create_three_dim_float(470, 100, 360, "random");
	float ***B = create_three_dim_float(830, 990, 270, "random");

	for (int a = 1; a < 677; a++)
	{
	  
	    D[a]=D[a+3]-0.558/C[a][a][a];
	  
	    float var_a=D[a]-0.168;
	    float var_b=D[a]-0.017;
	  
	    B[a][a][a]=B[a][a][a]/D[a];
	    D[a]=B[a][a][a-1]*0.482+A[a];
	}

    return 0;
}