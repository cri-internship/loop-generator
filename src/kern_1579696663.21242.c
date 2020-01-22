#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(150, 730, "zeros");
	float ***A = create_three_dim_float(700, 970, 70, "zeros");
	float *B = create_one_dim_float(970, "zeros");
	float *D = create_one_dim_float(330, "zeros");

	for (int a = 5; a < 150; a++)
	{
	  
	    B[a]=0.434;
	    B[a-4]=0.257;
	  
	    D[a]=0.28-C[a][a]/B[a];
	    D[a+1]=A[a][a][a];
	  
	    A[a][a][a]=D[a]-D[a]*0.198;
	    A[a-5][a-5][a]=C[a][a]-D[a]+B[a];
	  
	    B[a]=D[a]/C[a][a]*A[a][a][a];
	  
	    D[a]=C[a][a]+B[a];
	    C[a][a]=C[a-4][a-2]*A[a][a][a]/D[a];
	  
	    float var_a=B[a]-0.175;
	    float var_b=B[a+5]+0.578;
	  
	    float var_c=B[a]*0.338;
	    float var_d=B[a+3]+0.691;
	}

    return 0;
}