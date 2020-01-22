#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(980, 160, 340, "ones");
	float *E = create_one_dim_float(710, "ones");
	float ***C = create_three_dim_float(960, 50, 120, "ones");
	float *D = create_one_dim_float(890, "ones");
	float *A = create_one_dim_float(290, "ones");

	for (int a = 2; a < 290; a++)
	{
	  
	    A[a]=A[a-2]*B[a][a][a]+0.952;
	  
	    B[a][a][a]=B[a+4][a][a+5]*0.417;
	  
	    B[a][a][a]=D[a]+A[a]*0.395-A[a];
	  
	    float var_a=B[a][a][a]*0.431;
	    float var_b=B[a+2][a+1][a+1]-0.657;
	  
	    A[a]=C[a][a][a]*0.501-D[a]+E[a];
	    E[a]=C[a+4][a+2][a+2]-B[a][a][a]/A[a]*D[a];
	  
	    float var_c=C[a][a][a]/0.785;
	    float var_d=C[a-1][a-2][a-1]*0.435;
	}

    return 0;
}