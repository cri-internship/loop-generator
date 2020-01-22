#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(630, 490, "ones");
	float ***B = create_three_dim_float(400, 570, 720, "ones");
	float *A = create_one_dim_float(670, "ones");

	for (int a = 5; a < 400; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-5][a-2]/A[a]+C[a][a];
	  
	    C[a][a]=C[a-5][a-3]*0.688;
	  
	    B[a][a][a]=C[a][a]/B[a][a][a];
	  
	    C[a][a]=C[a][a]/B[a][a][a]*A[a];
	    C[a][a]=C[a+1][a+5]-B[a][a][a]*A[a];
	  
	    float var_a=C[a][a]*0.209;
	    float var_b=C[a][a-2]+0.574;
	}

    return 0;
}