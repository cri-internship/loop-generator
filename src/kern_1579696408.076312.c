#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(340, 320, 360, "ones");
	float **B = create_two_dim_float(370, 490, "ones");
	float *C = create_one_dim_float(430, "ones");
	float ***D = create_three_dim_float(440, 950, 370, "ones");

	for (int a = 4; a < 368; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-3][a]/C[a]*B[a][a];
	  
	    D[a][a][a]=B[a][a]*D[a][a][a];
	    C[a]=B[a+2][a+1]*A[a][a][a]/C[a];
	}

    return 0;
}