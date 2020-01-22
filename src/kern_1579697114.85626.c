#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(980, "ones");
	float ***A = create_three_dim_float(840, 300, 980, "ones");
	float *C = create_one_dim_float(90, "ones");

	for (int a = 0; a < 89; a++)
	{
	  
	    C[a]=B[a]+0.85;
	    C[a+1]=B[a]/A[a][a][a];
	}

    return 0;
}