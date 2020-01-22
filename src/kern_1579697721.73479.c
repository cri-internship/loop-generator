#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(760, "random");
	float ***C = create_three_dim_float(610, 690, 80, "random");
	float **D = create_two_dim_float(730, 760, "random");
	float ***A = create_three_dim_float(50, 20, 660, "random");

	for (int a = 5; a < 46; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-5][a-5]/0.136-D[a][a]*C[a][a][a];
	  
	    C[a][a][a]=C[a-4][a-5][a-2]-A[a][a][a]*B[a];
	  
	    A[a][a][a]=A[a+4][a+1][a+2]/0.207;
	  
	    D[a][a]=D[a][a+5]/0.564;
	  
	    B[a]=D[a][a];
	    B[a-1]=C[a][a][a];
	  
	    float var_a=B[a]-0.974;
	    float var_b=B[a]-0.47;
	}

    return 0;
}