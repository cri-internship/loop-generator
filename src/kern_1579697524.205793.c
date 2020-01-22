#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(570, 960, 760, "random");
	float **A = create_two_dim_float(320, 640, "random");
	float *C = create_one_dim_float(130, "random");

	for (int a = 5; a < 320; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-4][a-4]/0.573;
	  
	    A[a][a]=A[a-2][a-3]*B[a][a][a];
	  
	    A[a][a]=A[a-2][a-4]/C[a];
	  
	    B[a][a][a]=0.052;
	  
	    C[a]=B[a][a][a]/A[a][a]-0.641;
	    B[a][a][a]=B[a+1][a+2][a+1]/C[a]*A[a][a];
	}

    return 0;
}