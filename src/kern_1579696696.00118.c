#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(390, 420, "zeros");
	float *D = create_one_dim_float(880, "zeros");
	float *A = create_one_dim_float(700, "zeros");
	float ***C = create_three_dim_float(850, 750, 180, "zeros");
	float **E = create_two_dim_float(80, 300, "zeros");

	for (int a = 5; a < 76; a++)
	{
	  
	    A[a]=0.91;
	    float  var_a=A[a]*0.088;
	  
	    D[a]=D[a-3]*0.658;
	  
	    A[a]=A[a-5]*E[a][a]/B[a][a];
	  
	    B[a][a]=B[a-1][a-1]/0.245;
	  
	    B[a][a]=B[a][a+4]*0.61;
	  
	    E[a][a]=C[a][a][a]+A[a]*D[a];
	    E[a-2][a-3]=A[a]*B[a][a];
	  
	    float var_b=E[a][a]-0.328;
	    float var_c=E[a+3][a+4]+0.381;
	}

    return 0;
}