#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(200, 840, 190, "ones");
	float ***D = create_three_dim_float(610, 870, 220, "ones");
	float **B = create_two_dim_float(520, 680, "ones");
	float ***C = create_three_dim_float(770, 620, 1000, "ones");
	float ***A = create_three_dim_float(140, 670, 720, "ones");

	for (int a = 5; a < 140; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-2][a-5]/0.309;
	  
	    B[a][a]=B[a-2][a-1]*A[a][a][a]-E[a][a][a]/C[a][a][a]+D[a][a][a];
	  
	    float var_a=A[a][a][a]*0.208;
	    float var_b=A[a][a-5][a-2]-0.592;
	}

    return 0;
}