#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(230, "random");
	float **B = create_two_dim_float(660, 190, "random");
	float **D = create_two_dim_float(160, 850, "random");
	float ***E = create_three_dim_float(300, 770, 940, "random");
	float ***A = create_three_dim_float(320, 580, 270, "random");

	for (int a = 4; a < 225; a++)
	{
	  
	    B[a][a]=B[a-4][a-2]*0.413;
	  
	    B[a][a]=B[a+5][a+1]+0.928;
	  
	    C[a]=C[a+5]/E[a][a][a]*D[a][a]-B[a][a];
	  
	    A[a][a][a]=A[a][a+5][a]/C[a]+C[a]-D[a][a]*B[a][a];
	  
	    A[a][a][a]=A[a+5][a+3][a+3]*D[a][a]-B[a][a]+E[a][a][a]/C[a];
	}

    return 0;
}