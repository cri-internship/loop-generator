#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(620, 670, "random");
	float ***D = create_three_dim_float(580, 390, 20, "random");
	float ***B = create_three_dim_float(910, 510, 720, "random");
	float *A = create_one_dim_float(640, "random");

	for (int a = 5; a < 576; a++)
	{
	  
	    A[a]=A[a-5]/C[a][a]*D[a][a][a]+B[a][a][a];
	  
	    A[a]=A[a+3]*0.258;
	  
	    B[a][a][a]=B[a+3][a][a+1]+0.724;
	  
	    C[a][a]=A[a]*A[a];
	    C[a+1][a]=0.525;
	  
	    float var_a=D[a][a][a]-0.438;
	    float var_b=D[a+1][a+4][a+3]-0.59;
	}

    return 0;
}