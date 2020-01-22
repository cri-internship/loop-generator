#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(160, 680, 440, "ones");
	float *A = create_one_dim_float(240, "ones");
	float ***B = create_three_dim_float(180, 50, 450, "ones");

	for (int a = 5; a < 155; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-5][a]-0.587;
	  
	    A[a]=A[a+2]+B[a][a][a];
	  
	    B[a][a][a]=B[a][a+2][a]+0.589;
	  
	    C[a][a][a]=0.317+B[a][a][a];
	  
	    A[a]=0.948;
	  
	    float var_a=C[a][a][a]-0.166;
	    float var_b=C[a-5][a-3][a]+0.816;
	}

    return 0;
}