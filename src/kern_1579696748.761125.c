#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(940, 850, "zeros");
	float *C = create_one_dim_float(850, "zeros");
	float **A = create_two_dim_float(830, 490, "zeros");
	float ***D = create_three_dim_float(990, 370, 530, "zeros");

	for (int a = 5; a < 825; a++)
	{
	  
	    B[a][a]=B[a-1][a-1]+A[a][a]-C[a]*0.224;
	  
	    B[a][a]=B[a-1][a]/0.077;
	  
	    C[a]=C[a-4]*B[a][a]+A[a][a];
	  
	    B[a][a]=B[a][a+2]/D[a][a][a]*A[a][a]+C[a];
	  
	    D[a][a][a]=A[a][a]+B[a][a];
	    D[a+5][a+2][a]=C[a];
	  
	    A[a][a]=0.337;
	    A[a+5][a+3]=0.658;
	  
	    float var_a=D[a][a][a]/0.582;
	    float var_b=D[a-3][a-5][a-2]+0.434;
	}

    return 0;
}