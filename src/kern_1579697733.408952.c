#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(180, 270, "ones");
	float ***D = create_three_dim_float(680, 270, 940, "ones");
	float *A = create_one_dim_float(530, "ones");
	float *C = create_one_dim_float(660, "ones");

	for (int a = 4; a < 175; a++)
	{
	  
	    A[a]=A[a-2]/0.735;
	  
	    D[a][a][a]=D[a-1][a-4][a-4]/B[a][a];
	  
	    D[a][a][a]=D[a+1][a+5][a+4]*0.208;
	  
	    B[a][a]=0.5;
	    B[a+5][a+5]=0.181;
	  
	    D[a][a][a]=C[a]*0.182/B[a][a];
	    B[a][a]=C[a-4]+0.83;
	  
	    C[a]=B[a][a]*D[a][a][a]-A[a]+C[a];
	    A[a]=B[a+5][a+5]/0.365*A[a];
	}

    return 0;
}