#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(130, 10, 780, "ones");
	float **A = create_two_dim_float(510, 60, "ones");

	for (int a = 5; a < 130; a++)
	{
	  
	    B[a][a][a]=A[a][a];
	    B[a-5][a-1][a-5]=A[a][a];
	  
	    A[a][a]=B[a][a][a];
	    A[a][a+4]=B[a][a][a];
	  
	    B[a][a][a]=0.957;
	}

    return 0;
}