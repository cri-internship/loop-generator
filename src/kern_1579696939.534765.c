#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(460, 930, 950, "ones");
	float **B = create_two_dim_float(690, 680, "ones");
	float *C = create_one_dim_float(210, "ones");

	for (int a = 4; a < 210; a++)
	{
	  
	    C[a]=C[a-4]-0.843+A[a][a][a];
	  
	    A[a][a][a]=A[a+3][a+5][a+4]+0.415;
	  
	    A[a][a][a]=A[a+2][a+3][a]/0.183;
	  
	    B[a][a]=C[a]-C[a];
	    B[a-3][a-4]=C[a];
	}

    return 0;
}