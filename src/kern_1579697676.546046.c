#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(150, 860, 550, "ones");
	float ***D = create_three_dim_float(660, 260, 10, "ones");
	float *A = create_one_dim_float(860, "ones");
	float **B = create_two_dim_float(230, 830, "ones");
	float **C = create_two_dim_float(930, 760, "ones");

	for (int a = 5; a < 148; a++)
	{
	  
	    E[a][a][a]=E[a-4][a-3][a-3]-C[a][a]+B[a][a]/A[a];
	  
	    A[a]=A[a-1]+0.979;
	  
	    E[a][a][a]=E[a-2][a-5][a]/D[a][a][a]-C[a][a]+D[a][a][a];
	  
	    D[a][a][a]=D[a+1][a+3][a+1]/E[a][a][a]*B[a][a]+0.73;
	  
	    E[a][a][a]=E[a+2][a+1][a]*0.357;
	}

    return 0;
}