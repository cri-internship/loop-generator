#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(790, 950, 730, "ones");
	float *A = create_one_dim_float(430, "ones");
	float *B = create_one_dim_float(200, "ones");
	float *E = create_one_dim_float(20, "ones");
	float ***C = create_three_dim_float(390, 20, 780, "ones");

	for (int a = 5; a < 18; a++)
	{
	  
	    E[a]=E[a-3]+B[a]*A[a];
	  
	    E[a]=0.773;
	  
	    E[a]=E[a+2]+0.166;
	  
	    C[a][a][a]=0.486-D[a][a][a]+B[a];
	    C[a-4][a-3][a-5]=0.653;
	}

    return 0;
}