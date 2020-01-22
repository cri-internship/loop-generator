#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(910, 530, 820, "ones");
	float *B = create_one_dim_float(400, "ones");
	float ***D = create_three_dim_float(500, 590, 690, "ones");
	float **C = create_two_dim_float(10, 80, "ones");

	for (int a = 4; a < 399; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-3][a-4]/0.612;
	  
	    A[a][a][a]=A[a-4][a][a-4]*B[a];
	  
	    A[a][a][a]=A[a-2][a][a]*0.367;
	  
	    B[a]=D[a][a][a]+C[a][a];
	    B[a+1]=A[a][a][a];
	  
	    C[a][a]=B[a]*A[a][a][a]-C[a][a]+D[a][a][a];
	    A[a][a][a]=B[a+1]*D[a][a][a]+A[a][a][a]-C[a][a];
	  
	    float var_a=D[a][a][a]/0.741;
	    float var_b=D[a-2][a-2][a-2]-0.449;
	  
	    float var_c=A[a][a][a]*0.517;
	    float var_d=A[a+1][a+2][a+2]-0.257;
	}

    return 0;
}