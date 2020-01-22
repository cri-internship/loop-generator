#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(730, 230, "ones");
	float **C = create_two_dim_float(990, 780, "ones");
	float *B = create_one_dim_float(680, "ones");

	for (int a = 3; a < 678; a++)
	{
	  
	    C[a][a]=C[a-3][a-3]/0.466;
	  
	    B[a]=B[a+1]*0.844;
	  
	    B[a]=0.631;
	  
	    A[a][a]=0.917;
	    A[a+1][a+5]=0.65;
	}

    return 0;
}