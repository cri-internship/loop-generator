#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(940, 900, 210, "ones");
	float **B = create_two_dim_float(700, 430, "ones");

	for (int a = 5; a < 695; a++)
	{
	  
	    B[a][a]=B[a-4][a-2]+0.414;
	  
	    B[a][a]=B[a+1][a+5]*0.996;
	  
	    A[a][a][a]=A[a+3][a+4][a+3]-B[a][a];
	  
	    B[a][a]=B[a][a]/A[a][a][a];
	    A[a][a][a]=B[a-5][a-2]-A[a][a][a];
	}

    return 0;
}