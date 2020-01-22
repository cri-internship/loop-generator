#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(230, 360, "zeros");
	float ***C = create_three_dim_float(860, 160, 150, "zeros");
	float *D = create_one_dim_float(70, "zeros");
	float *B = create_one_dim_float(180, "zeros");

	for (int a = 5; a < 70; a++)
	{
	  
	    D[a]=D[a-4]-0.685;
	  
	    A[a][a]=A[a][a+5]-0.321;
	  
	    C[a][a][a]=0.992;
	    C[a+5][a+5][a+3]=0.27;
	  
	    float var_a=D[a]*0.935;
	    float var_b=D[a]+0.913;
	  
	    float var_c=A[a][a]*0.841;
	    float var_d=A[a-1][a-5]-0.259;
	  
	    float var_e=C[a][a][a]*0.026;
	    float var_f=C[a-4][a][a-2]/0.109;
	}

    return 0;
}