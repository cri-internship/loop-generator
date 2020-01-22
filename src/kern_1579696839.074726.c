#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(670, 680, "random");
	float ***C = create_three_dim_float(710, 970, 300, "random");
	float *A = create_one_dim_float(890, "random");
	float *B = create_one_dim_float(790, "random");

	for (int a = 3; a < 787; a++)
	{
	  
	    B[a]=B[a-3]-0.795+D[a][a];
	  
	    A[a]=A[a+1]/0.647;
	  
	    A[a]=A[a+5]+B[a]*C[a][a][a];
	  
	    B[a]=B[a+2]-0.956;
	  
	    C[a][a][a]=B[a]/C[a][a][a]*D[a][a]-A[a];
	    D[a][a]=B[a+3]-D[a][a]+A[a];
	}

    return 0;
}