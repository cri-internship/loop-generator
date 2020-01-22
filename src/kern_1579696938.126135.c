#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(580, 600, 520, "zeros");
	float **A = create_two_dim_float(710, 570, "zeros");

	for (int a = 5; a < 577; a++)
	{
	  
	    float var_a=A[a][a]/0.707;
	    float var_b=A[a][a-4]-0.773;
	  
	    B[a][a][a]=B[a][a][a]/A[a][a];
	    A[a][a]=B[a-5][a-5][a-5]-A[a][a];
	  
	    float var_c=B[a][a][a]/0.846;
	    float var_d=B[a+3][a+3][a+3]+0.535;
	}

    return 0;
}