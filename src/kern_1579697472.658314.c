#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(40, 780, 600, "zeros");
	float **C = create_two_dim_float(20, 920, "zeros");
	float ***B = create_three_dim_float(210, 180, 890, "zeros");

	for (int a = 0; a < 35; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+2][a+2]*B[a][a][a]+C[a][a];
	  
	    A[a][a][a]=A[a][a+5][a+2]*C[a][a];
	  
	    B[a][a][a]=A[a][a][a]-A[a][a][a];
	    B[a][a+2][a+3]=A[a][a][a]+C[a][a];
	  
	    float var_a=B[a][a][a]-0.528;
	    float var_b=B[a+4][a+1][a+5]*0.565;
	}

    return 0;
}