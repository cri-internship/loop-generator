#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(150, 330, 810, "ones");
	float ***A = create_three_dim_float(790, 240, 350, "ones");
	float *C = create_one_dim_float(160, "ones");
	float **D = create_two_dim_float(180, 510, "ones");
	float **E = create_two_dim_float(310, 900, "ones");

	for (int a = 5; a < 160; a++)
	{
	  
	    D[a][a]=D[a+5][a+3]+A[a][a][a];
	  
	    E[a][a]=E[a+3][a+4]/B[a][a][a]*C[a]-D[a][a];
	  
	    float var_a=C[a]*0.146;
	    float var_b=C[a-5]*0.262;
	}

    return 0;
}