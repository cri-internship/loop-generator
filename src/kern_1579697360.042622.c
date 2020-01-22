#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(650, 550, 930, "ones");
	float *D = create_one_dim_float(890, "ones");
	float ***A = create_three_dim_float(30, 350, 130, "ones");
	float **B = create_two_dim_float(990, 140, "ones");

	for (int a = 1; a < 25; a++)
	{
	  
	    B[a][a]=B[a+1][a+4]+C[a][a][a];
	  
	    A[a][a][a]=B[a][a]-D[a]*C[a][a][a];
	    A[a+2][a+5][a]=D[a];
	  
	    D[a]=A[a][a][a]+C[a][a][a];
	    D[a-1]=0.959;
	  
	    B[a][a]=D[a]*B[a][a]+C[a][a][a]-0.475;
	    D[a]=D[a+4]-A[a][a][a]+C[a][a][a]*B[a][a];
	}

    return 0;
}