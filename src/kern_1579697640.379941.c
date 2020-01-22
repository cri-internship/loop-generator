#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(380, "random");
	float ***D = create_three_dim_float(710, 710, 960, "random");
	float *B = create_one_dim_float(500, "random");
	float ***C = create_three_dim_float(570, 220, 950, "random");
	float ***A = create_three_dim_float(480, 310, 860, "random");

	for (int a = 5; a < 500; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-3][a-5]+0.691/E[a]*B[a]-C[a][a][a];
	  
	    D[a][a][a]=D[a+3][a+1][a+4]/0.447;
	  
	    float var_a=B[a]/0.03;
	    B[a]=0.097;
	  
	    C[a][a][a]=C[a+3][a+2][a+4]/0.3;
	  
	    float var_b=C[a][a][a]-0.178;
	    float var_c=C[a+5][a+5][a+2]*0.088;
	}

    return 0;
}