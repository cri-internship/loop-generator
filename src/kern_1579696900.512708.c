#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(640, 200, 780, "zeros");
	float **B = create_two_dim_float(810, 410, "zeros");

	for (int a = 5; a < 640; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-4][a-5]/0.469;
	  
	    A[a][a][a]=A[a][a-3][a]*0.261;
	  
	    B[a][a]=B[a-1][a-5]+A[a][a][a];
	  
	    B[a][a]=B[a+3][a]-0.725;
	  
	    float var_a=A[a][a][a]-0.05;
	    float var_b=A[a-4][a][a-3]/0.272;
	}

    return 0;
}