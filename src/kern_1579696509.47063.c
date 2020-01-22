#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(640, "random");
	float ***B = create_three_dim_float(710, 480, 420, "random");
	float *C = create_one_dim_float(760, "random");

	for (int a = 4; a < 636; a++)
	{
	  
	    C[a]=C[a+1]-B[a][a][a]*A[a];
	  
	    C[a]=C[a+4]-0.634;
	  
	    A[a]=A[a+4]/C[a]-C[a];
	  
	    B[a][a][a]=C[a];
	    B[a+3][a+2][a+1]=A[a]-C[a];
	  
	    float var_a=B[a][a][a]-0.028;
	    float var_b=B[a+5][a+2][a+5]*0.892;
	  
	    C[a]=B[a][a][a]-A[a]+0.633;
	    A[a]=B[a-2][a][a-2]*0.425/A[a];
	  
	    B[a][a][a]=A[a]+B[a][a][a]*C[a];
	    A[a]=A[a-4]/C[a];
	}

    return 0;
}