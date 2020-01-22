#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(110, 640, "ones");
	float **A = create_two_dim_float(110, 400, "ones");
	float **B = create_two_dim_float(350, 280, "ones");
	float **E = create_two_dim_float(950, 570, "ones");
	float ***D = create_three_dim_float(650, 430, 40, "ones");

	for (int a = 4; a < 105; a++)
	{
	  
	    C[a][a]=B[a][a]/A[a][a]+0.562;
	    E[a][a]=C[a][a]-E[a][a]*B[a][a]/E[a][a]+0.796;
	  
	    C[a][a]=C[a+5][a]+A[a][a];
	  
	    C[a][a]=C[a+1][a+5]/0.878;
	  
	    A[a][a]=A[a+5][a+1]*0.665;
	  
	    E[a][a]=0.427-D[a][a][a]/B[a][a];
	  
	    float var_a=B[a][a]*0.391;
	    float var_b=B[a+1][a]-0.451;
	}

    return 0;
}