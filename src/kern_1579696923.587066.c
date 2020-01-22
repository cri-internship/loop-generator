#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(900, 290, 390, "ones");
	float *B = create_one_dim_float(840, "ones");
	float *A = create_one_dim_float(370, "ones");

	for (int a = 3; a < 367; a++)
	{
	  
	    C[a][a][a]=C[a-1][a][a]/0.539;
	  
	    A[a]=C[a][a][a];
	    A[a-3]=B[a];
	  
	    C[a][a][a]=A[a]/A[a];
	  
	    A[a]=0.296;
	  
	    A[a]=A[a]/B[a];
	    C[a][a][a]=A[a-2]+B[a]/C[a][a][a];
	}

    return 0;
}