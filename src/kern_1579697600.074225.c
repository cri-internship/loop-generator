#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(840, 650, 50, "zeros");
	float *B = create_one_dim_float(920, "zeros");
	float *A = create_one_dim_float(310, "zeros");
	float ***D = create_three_dim_float(930, 760, 270, "zeros");
	float *C = create_one_dim_float(120, "zeros");

	for (int a = 5; a < 310; a++)
	{
	  
	    A[a]=A[a-3]-C[a]/B[a]+E[a][a][a]*D[a][a][a];
	  
	    D[a][a][a]=D[a][a+4][a]*0.202;
	  
	    E[a][a][a]=0.702;
	    E[a][a][a-1]=0.189;
	  
	    B[a]=A[a]+A[a]/D[a][a][a];
	    B[a+5]=E[a][a][a]-C[a]+A[a];
	  
	    A[a]=B[a]/E[a][a][a]-A[a]+0.618;
	    D[a][a][a]=B[a+4]*E[a][a][a]/A[a]-C[a];
	  
	    float var_a=B[a]+0.55;
	    float var_b=B[a-5]+0.665;
	}

    return 0;
}