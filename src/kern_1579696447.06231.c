#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(550, 1000, "ones");
	float ***C = create_three_dim_float(870, 940, 390, "ones");
	float *A = create_one_dim_float(500, "ones");
	float *B = create_one_dim_float(710, "ones");

	for (int a = 2; a < 550; a++)
	{
	  
	    C[a][a][a]=C[a+5][a+5][a+1]*D[a][a];
	  
	    B[a]=A[a];
	    B[a+2]=C[a][a][a]-C[a][a][a]/D[a][a];
	  
	    D[a][a]=0.894;
	    D[a-2][a]=0.865;
	}

    return 0;
}