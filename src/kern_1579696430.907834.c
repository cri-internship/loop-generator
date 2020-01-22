#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(120, "zeros");
	float *A = create_one_dim_float(560, "zeros");
	float *B = create_one_dim_float(330, "zeros");
	float **C = create_two_dim_float(940, 30, "zeros");

	for (int a = 5; a < 115; a++)
	{
	  
	    A[a]=A[a+2]+0.605;
	  
	    B[a]=C[a][a]*D[a]-A[a];
	    B[a]=D[a]+A[a];
	  
	    D[a]=0.656;
	    D[a+2]=0.332;
	  
	    float var_a=C[a][a]/0.225;
	    float var_b=C[a-4][a-1]/0.211;
	  
	    D[a]=C[a][a]-B[a]+D[a];
	    B[a]=C[a-4][a-3]/0.286-D[a]*A[a];
	  
	    float var_c=A[a]/0.476;
	    float var_d=A[a-5]-0.315;
	  
	    A[a]=D[a]/B[a]-C[a][a];
	    C[a][a]=D[a+5]+C[a][a];
	}

    return 0;
}