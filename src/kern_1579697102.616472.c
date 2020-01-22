#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(690, 950, "zeros");
	float **D = create_two_dim_float(620, 40, "zeros");
	float *B = create_one_dim_float(660, "zeros");
	float **A = create_two_dim_float(620, 490, "zeros");

	for (int a = 5; a < 618; a++)
	{
	  
	    A[a][a]=A[a-5][a]*0.858;
	  
	    D[a][a]=D[a+1][a+2]*0.995/B[a]+A[a][a];
	  
	    C[a][a]=0.593;
	    C[a][a-3]=0.046;
	  
	    float var_a=A[a][a]*0.187;
	    float var_b=A[a-5][a-4]/0.204;
	}

    return 0;
}