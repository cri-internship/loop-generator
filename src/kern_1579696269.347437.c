#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(380, 210, "ones");
	float ***D = create_three_dim_float(790, 340, 330, "ones");
	float **E = create_two_dim_float(170, 410, "ones");
	float *B = create_one_dim_float(190, "ones");
	float ***A = create_three_dim_float(580, 400, 50, "ones");

	for (int a = 5; a < 170; a++)
	{
	  
	    E[a][a]=E[a-2][a-2]-0.737;
	  
	    E[a][a]=E[a][a-4]*A[a][a][a]+C[a][a]-D[a][a][a];
	  
	    C[a][a]=A[a][a][a]*0.843;
	    D[a][a][a]=A[a][a][a]*E[a][a]/D[a][a][a]-B[a]+E[a][a];
	  
	    float var_a=B[a]*0.382;
	    float var_b=B[a+2]-0.863;
	  
	    A[a][a][a]=D[a][a][a]-A[a][a][a]+B[a]*E[a][a];
	    E[a][a]=D[a-5][a-1][a-2]-0.762/B[a];
	}

    return 0;
}