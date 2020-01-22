#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(640, "ones");
	float *C = create_one_dim_float(730, "ones");
	float ***E = create_three_dim_float(10, 780, 510, "ones");
	float **A = create_two_dim_float(420, 830, "ones");
	float **B = create_two_dim_float(300, 470, "ones");

	for (int a = 5; a < 10; a++)
	{
	  
	    C[a]=C[a-3]/E[a][a][a]+A[a][a]*B[a][a];
	  
	    E[a][a][a]=E[a-2][a-3][a-5]-0.454;
	  
	    A[a][a]=A[a-4][a-5]-C[a]*C[a];
	  
	    C[a]=C[a+3]-0.523;
	  
	    E[a][a][a]=D[a]+B[a][a]/A[a][a];
	  
	    B[a][a]=C[a]*B[a][a]-A[a][a]/E[a][a][a];
	  
	    E[a][a][a]=C[a]*B[a][a];
	}

    return 0;
}