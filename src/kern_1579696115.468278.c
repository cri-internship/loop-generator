#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(510, 120, "ones");
	float **A = create_two_dim_float(790, 180, "ones");
	float **B = create_two_dim_float(760, 490, "ones");

	for (int a = 5; a < 505; a++)
	{
	  
	    A[a][a]=A[a-5][a]-C[a][a];
	  
	    A[a][a]=0.684;
	  
	    float var_a=A[a][a]*0.731;
	    float var_b=A[a][a+4]+0.846;
	  
	    float var_c=A[a][a]-0.364;
	    float var_d=A[a-2][a-1]-0.755;
	  
	    C[a][a]=C[a][a]*A[a][a];
	    A[a][a]=C[a+5][a+2]*B[a][a];
	}

    return 0;
}