#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(720, 200, 160, "zeros");
	float *C = create_one_dim_float(590, "zeros");
	float *B = create_one_dim_float(90, "zeros");

	for (int a = 4; a < 86; a++)
	{
	  
	    B[a]=B[a-4]*0.792;
	  
	    C[a]=C[a-2]*0.586;
	  
	    A[a][a][a]=C[a]-B[a];
	    A[a][a-4][a-1]=0.12*B[a];
	  
	    A[a][a][a]=B[a]/A[a][a][a];
	    B[a]=B[a+4]-A[a][a][a]+C[a];
	  
	    float var_a=B[a]*0.088;
	}

    return 0;
}