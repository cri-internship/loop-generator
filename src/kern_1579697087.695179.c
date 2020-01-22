#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(380, 430, 540, "ones");
	float ***C = create_three_dim_float(90, 380, 720, "ones");
	float *B = create_one_dim_float(390, "ones");

	for (int a = 2; a < 86; a++)
	{
	  
	    C[a][a][a]=C[a][a+4][a]*0.183;
	  
	    C[a][a][a]=C[a][a][a]/B[a];
	    A[a][a][a]=C[a-1][a-2][a-1]+A[a][a][a]/B[a];
	}

    return 0;
}