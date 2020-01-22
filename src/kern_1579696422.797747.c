#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(170, 110, 870, "ones");
	float *A = create_one_dim_float(310, "ones");

	for (int a = 4; a < 166; a++)
	{
	  
	    B[a][a][a]=B[a+3][a+4][a+1]*0.784;
	  
	    A[a]=B[a][a][a];
	    A[a-4]=B[a][a][a];
	  
	    A[a]=A[a]*B[a][a][a];
	    B[a][a][a]=A[a]+B[a][a][a];
	  
	    A[a]=A[a]+B[a][a][a];
	    A[a]=A[a-3]*0.854;
	}

    return 0;
}