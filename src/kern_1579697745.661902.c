#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(320, 510, "zeros");
	float *C = create_one_dim_float(300, "zeros");
	float *B = create_one_dim_float(940, "zeros");
	float ***D = create_three_dim_float(40, 580, 960, "zeros");
	float **E = create_two_dim_float(330, 230, "zeros");

	for (int a = 0; a < 35; a++)
	{
	  
	    C[a]=0.25/D[a][a][a]-B[a];
	    D[a][a][a]=C[a]/E[a][a]*A[a][a]+B[a];
	  
	    D[a][a][a]=D[a+3][a+4][a+5]+0.715;
	  
	    A[a][a]=A[a+1][a+5]/C[a];
	  
	    E[a][a]=E[a+2][a+3]+0.609;
	}

    return 0;
}