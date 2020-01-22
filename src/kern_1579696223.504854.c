#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(500, "random");
	float **D = create_two_dim_float(740, 850, "random");
	float ***C = create_three_dim_float(190, 790, 490, "random");
	float ***A = create_three_dim_float(940, 210, 530, "random");

	for (int a = 4; a < 190; a++)
	{
	  
	    C[a][a][a]=A[a][a][a]+D[a][a]-B[a];
	    C[a][a-1][a-2]=A[a][a][a]+B[a];
	  
	    float var_a=B[a]/0.53;
	    float var_b=B[a-4]*0.236;
	  
	    D[a][a]=A[a][a][a]*C[a][a][a]+D[a][a];
	    B[a]=A[a-3][a-4][a-2]/C[a][a][a]*B[a];
	}

    return 0;
}