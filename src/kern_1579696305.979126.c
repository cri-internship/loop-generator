#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(410, 890, 710, "ones");
	float **C = create_two_dim_float(320, 710, "ones");
	float *A = create_one_dim_float(730, "ones");
	float ***B = create_three_dim_float(720, 230, 660, "ones");
	float ***E = create_three_dim_float(480, 280, 550, "ones");

	for (int a = 5; a < 315; a++)
	{
	  
	    E[a][a][a]=E[a-2][a-2][a-5]-0.627;
	  
	    C[a][a]=C[a-3][a]+B[a][a][a];
	  
	    A[a]=A[a-2]*E[a][a][a]+C[a][a]/D[a][a][a]-B[a][a][a];
	  
	    A[a]=A[a+1]/B[a][a][a]-D[a][a][a];
	  
	    float var_a=C[a][a]-0.875;
	    float var_b=C[a+5][a+1]+0.3;
	}

    return 0;
}