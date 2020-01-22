#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(930, "random");
	float ***D = create_three_dim_float(1000, 880, 810, "random");
	float ***B = create_three_dim_float(140, 260, 520, "random");
	float ***A = create_three_dim_float(240, 220, 840, "random");

	for (int a = 5; a < 140; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-1][a-2]-A[a][a][a];
	  
	    A[a][a][a]=A[a][a-4][a-3]-0.591;
	  
	    B[a][a][a]=B[a][a-5][a-1]-C[a]*D[a][a][a]+A[a][a][a];
	  
	    D[a][a][a]=D[a-3][a-3][a-2]*B[a][a][a]-C[a]+A[a][a][a];
	  
	    D[a][a][a]=B[a][a][a]-A[a][a][a];
	  
	    C[a]=A[a][a][a]+B[a][a][a];
	    C[a+4]=A[a][a][a];
	  
	    D[a][a][a]=C[a]+B[a][a][a]/D[a][a][a];
	    A[a][a][a]=C[a-2]*D[a][a][a]+A[a][a][a]-B[a][a][a];
	}

    return 0;
}