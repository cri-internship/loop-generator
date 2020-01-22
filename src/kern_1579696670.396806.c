#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(140, "zeros");
	float ***B = create_three_dim_float(780, 840, 490, "zeros");
	float ***C = create_three_dim_float(960, 30, 110, "zeros");
	float ***A = create_three_dim_float(340, 810, 90, "zeros");

	for (int a = 5; a < 135; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-2][a-2]/B[a][a][a]-0.76;
	  
	    D[a]=D[a-2]-C[a][a][a];
	  
	    B[a][a][a]=0.078;
	    B[a+3][a+2][a+3]=0.927;
	  
	    B[a][a][a]=0.584;
	  
	    C[a][a][a]=0.341;
	  
	    float var_a=A[a][a][a]-0.724;
	    float var_b=A[a+1][a+3][a+3]-0.689;
	  
	    float var_c=D[a]+0.919;
	    float var_d=D[a+5]+0.237;
	}

    return 0;
}