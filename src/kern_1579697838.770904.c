#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(240, 980, "zeros");
	float **B = create_two_dim_float(280, 380, "zeros");
	float **D = create_two_dim_float(240, 730, "zeros");
	float **E = create_two_dim_float(400, 570, "zeros");
	float *C = create_one_dim_float(980, "zeros");

	for (int a = 4; a < 240; a++)
	{
	  
	    E[a][a]=E[a-4][a-2]*0.419;
	  
	    B[a][a]=B[a-2][a-3]*D[a][a]/E[a][a];
	  
	    C[a]=C[a-1]/A[a][a]*0.615;
	  
	    A[a][a]=0.495*C[a]+E[a][a];
	    B[a][a]=A[a][a]/0.742-D[a][a]+E[a][a]*C[a];
	  
	    E[a][a]=0.561+A[a][a]/B[a][a]-C[a];
	  
	    float var_a=E[a][a]/0.132;
	    float var_b=E[a+4][a+1]+0.274;
	  
	    A[a][a]=E[a][a]/C[a]*0.381+B[a][a]-D[a][a];
	    D[a][a]=E[a+4][a+3]/C[a]-A[a][a]+D[a][a]*B[a][a];
	}

    return 0;
}