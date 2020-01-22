#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(530, "random");
	float ***D = create_three_dim_float(300, 760, 20, "random");
	float *E = create_one_dim_float(1000, "random");
	float *A = create_one_dim_float(460, "random");
	float *C = create_one_dim_float(520, "random");

	for (int a = 5; a < 300; a++)
	{
	  
	    B[a]=B[a-3]-0.687;
	  
	    E[a]=E[a-4]+B[a]-0.579;
	  
	    B[a]=A[a]+E[a];
	  
	    D[a][a][a]=D[a][a][a]-B[a];
	    B[a]=D[a-2][a-1][a-1]-B[a];
	  
	    float var_a=A[a]*0.444;
	    float var_b=A[a-5]-0.078;
	}

    return 0;
}