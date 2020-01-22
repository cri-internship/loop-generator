#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(20, 120, "ones");
	float ***A = create_three_dim_float(630, 950, 160, "ones");

	for (int a = 5; a < 20; a++)
	{
	  
	    B[a][a]=B[a-2][a-3]/0.977;
	  
	    B[a][a]=B[a-4][a-5]+0.587;
	  
	    A[a][a][a]=B[a][a];
	    A[a+1][a+3][a+2]=B[a][a];
	}

    return 0;
}