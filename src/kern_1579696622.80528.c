#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(420, 20, 630, "ones");
	float **D = create_two_dim_float(910, 520, "ones");
	float *A = create_one_dim_float(370, "ones");
	float ***C = create_three_dim_float(980, 780, 990, "ones");

	for (int a = 4; a < 910; a++)
	{
	  
	    D[a][a]=D[a-2][a-4]-C[a][a][a]/B[a][a][a];
	  
	    C[a][a][a]=0.274;
	    C[a][a-3][a-3]=A[a]+D[a][a]-A[a];
	}

    return 0;
}