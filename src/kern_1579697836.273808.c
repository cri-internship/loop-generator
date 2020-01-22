#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(760, 40, 510, "zeros");
	float *A = create_one_dim_float(160, "zeros");
	float **B = create_two_dim_float(380, 260, "zeros");
	float *C = create_one_dim_float(530, "zeros");
	float ***E = create_three_dim_float(580, 420, 970, "zeros");

	for (int a = 4; a < 380; a++)
	{
	  
	    C[a]=C[a-2]*B[a][a]-D[a][a][a]+A[a]/E[a][a][a];
	  
	    E[a][a][a]=E[a+4][a+3][a+3]-C[a]+B[a][a]/C[a];
	  
	    C[a]=0.743;
	  
	    B[a][a]=A[a]/D[a][a][a];
	    B[a-4][a]=0.116/C[a];
	}

    return 0;
}