#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(930, 780, "zeros");
	float **B = create_two_dim_float(360, 80, "zeros");
	float **A = create_two_dim_float(780, 520, "zeros");

	for (int a = 5; a < 355; a++)
	{
	  
	    B[a][a]=B[a-5][a-3]*0.945;
	  
	    B[a][a]=B[a-4][a-5]*A[a][a];
	  
	    A[a][a]=A[a][a+1]-B[a][a]+C[a][a];
	  
	    B[a][a]=B[a][a+5]+A[a][a];
	  
	    float var_a=B[a][a]*0.075;
	    B[a][a]=0.396;
	  
	    B[a][a]=C[a][a]-B[a][a]+A[a][a];
	    C[a][a]=C[a+3][a+5]-A[a][a];
	}

    return 0;
}