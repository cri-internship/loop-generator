#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(910, 290, "ones");
	float ***A = create_three_dim_float(870, 690, 860, "ones");
	float **B = create_two_dim_float(270, 910, "ones");
	float ***D = create_three_dim_float(670, 600, 350, "ones");

	for (int a = 5; a < 670; a++)
	{
	  
	    D[a][a][a]=D[a][a][a-5]/0.446;
	  
	    C[a][a]=C[a-2][a]+0.679;
	  
	    A[a][a][a]=A[a+4][a][a+5]-0.782+B[a][a]*D[a][a][a];
	  
	    C[a][a]=C[a+3][a]*0.854;
	  
	    A[a][a][a]=B[a][a]/C[a][a]-0.213;
	  
	    float var_a=A[a][a][a]+0.623;
	    float var_b=A[a-1][a-2][a-1]-0.382;
	}

    return 0;
}