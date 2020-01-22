#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(250, 230, 120, "ones");
	float ***A = create_three_dim_float(230, 120, 280, "ones");
	float **C = create_two_dim_float(380, 290, "ones");

	for (int a = 5; a < 230; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-4][a-5]/0.035;
	  
	    A[a][a][a]=A[a-1][a-2][a-3]/0.105;
	  
	    C[a][a]=C[a+5][a+4]-0.167;
	  
	    A[a][a][a]=0.983;
	}

    return 0;
}