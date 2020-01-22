#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(870, "random");
	float *A = create_one_dim_float(270, "random");
	float ***C = create_three_dim_float(600, 10, 410, "random");

	for (int a = 5; a < 270; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-5][a-5]*0.282;
	  
	    C[a][a][a]=C[a+4][a+1][a+2]/0.228;
	  
	    A[a]=0.553;
	    A[a-3]=0.53;
	  
	    B[a]=A[a]/B[a];
	    C[a][a][a]=A[a-5]/C[a][a][a];
	}

    return 0;
}