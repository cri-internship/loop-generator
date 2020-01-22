#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(70, 440, 470, "zeros");
	float *A = create_one_dim_float(380, "zeros");
	float ***D = create_three_dim_float(580, 90, 630, "zeros");
	float *B = create_one_dim_float(630, "zeros");

	for (int a = 5; a < 67; a++)
	{
	  
	    D[a][a][a]=D[a][a-1][a-4]/B[a];
	  
	    D[a][a][a]=D[a-4][a][a-2]-A[a]*C[a][a][a];
	  
	    D[a][a][a]=D[a+1][a][a+2]/0.339;
	  
	    C[a][a][a]=C[a+3][a+3][a]*D[a][a][a]+B[a]/A[a];
	  
	    A[a]=0.319;
	    A[a-4]=0.238;
	  
	    B[a]=0.381;
	    B[a-5]=0.618;
	  
	    float var_a=A[a]+0.873;
	    float var_b=A[a-2]*0.617;
	}

    return 0;
}