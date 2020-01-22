#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(830, "ones");
	float ***A = create_three_dim_float(290, 30, 280, "ones");
	float ***C = create_three_dim_float(900, 620, 420, "ones");

	for (int a = 5; a < 290; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-1][a-1]/A[a][a][a];
	  
	    A[a][a][a]=A[a][a-5][a-1]-0.182;
	  
	    B[a]=B[a+4]/0.122;
	  
	    C[a][a][a]=0.986;
	  
	    float var_a=B[a]-0.768;
	    float var_b=B[a]-0.816;
	  
	    A[a][a][a]=B[a]-C[a][a][a]*A[a][a][a];
	    B[a]=B[a-1]*C[a][a][a];
	  
	    C[a][a][a]=C[a][a][a]-B[a]*A[a][a][a];
	    B[a]=C[a][a+4][a+4]/A[a][a][a];
	}

    return 0;
}