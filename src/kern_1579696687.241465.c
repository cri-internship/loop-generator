#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(40, 790, 880, "random");
	float **B = create_two_dim_float(30, 270, "random");
	float ***A = create_three_dim_float(320, 450, 700, "random");

	for (int a = 5; a < 29; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-5][a-1]/0.038;
	  
	    A[a][a][a]=C[a][a][a];
	    A[a+3][a+3][a]=B[a][a]*C[a][a][a];
	  
	    B[a][a]=0.92;
	    B[a][a+1]=0.129;
	  
	    C[a][a][a]=A[a][a][a]-A[a][a][a];
	  
	    float var_a=C[a][a][a]-0.146;
	    float var_b=C[a][a+2][a+1]/0.203;
	}

    return 0;
}