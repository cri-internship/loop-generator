#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(600, "ones");
	float **D = create_two_dim_float(760, 780, "ones");
	float *C = create_one_dim_float(370, "ones");
	float **A = create_two_dim_float(180, 580, "ones");

	for (int a = 4; a < 176; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]+0.841;
	  
	    D[a][a]=D[a+5][a+1]+0.662;
	  
	    B[a]=B[a+2]-0.127;
	  
	    C[a]=B[a]-A[a][a];
	    B[a]=B[a+1]*D[a][a];
	  
	    A[a][a]=A[a][a]-C[a]/B[a]+C[a];
	    D[a][a]=A[a+2][a+1]-C[a];
	  
	    float var_a=A[a][a]-0.454;
	    float var_b=A[a+3][a+4]*0.892;
	}

    return 0;
}