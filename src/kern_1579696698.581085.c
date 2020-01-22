#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(570, 110, "ones");
	float ***A = create_three_dim_float(20, 860, 600, "ones");
	float ***C = create_three_dim_float(100, 930, 260, "ones");

	for (int a = 3; a < 16; a++)
	{
	  
	    B[a][a]=B[a][a-1]*0.711;
	  
	    A[a][a][a]=A[a-3][a][a-2]/0.523;
	  
	    A[a][a][a]=A[a+1][a+2][a+2]-B[a][a]*C[a][a][a];
	  
	    A[a][a][a]=A[a][a][a+1]/C[a][a][a]+B[a][a];
	  
	    C[a][a][a]=A[a][a][a]/0.32;
	    B[a][a]=A[a+4][a+3][a]*C[a][a][a]-B[a][a];
	  
	    A[a][a][a]=B[a][a]-A[a][a][a]+A[a][a][a];
	    B[a][a]=B[a+4][a+5]+C[a][a][a]-A[a][a][a];
	}

    return 0;
}