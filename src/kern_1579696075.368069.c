#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(360, 650, "zeros");
	float *B = create_one_dim_float(150, "zeros");

	for (int a = 0; a < 146; a++)
	{
	  
	    B[a]=B[a+3]*A[a][a];
	  
	    B[a]=B[a+4]+0.636;
	  
	    A[a][a]=0.453;
	    A[a+2][a+5]=0.735;
	  
	    A[a][a]=0.052;
	  
	    float var_a=B[a]+0.824;
	    float var_b=B[a]-0.044;
	  
	    A[a][a]=A[a][a]-B[a];
	    A[a][a]=A[a+1][a+3]/B[a];
	}

    return 0;
}