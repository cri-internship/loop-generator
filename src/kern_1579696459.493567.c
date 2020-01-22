#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(420, "zeros");
	float ***A = create_three_dim_float(50, 720, 640, "zeros");
	float *D = create_one_dim_float(40, "zeros");
	float ***C = create_three_dim_float(560, 170, 770, "zeros");

	for (int a = 4; a < 38; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-3][a-2]*0.328;
	  
	    A[a][a][a]=A[a+4][a+1][a+1]*0.842;
	  
	    D[a]=D[a+2]*A[a][a][a];
	  
	    D[a]=0.554;
	  
	    D[a]=C[a][a][a]/D[a]+D[a]-B[a];
	    B[a]=C[a-4][a-3][a-3]*B[a]-D[a]/A[a][a][a];
	}

    return 0;
}