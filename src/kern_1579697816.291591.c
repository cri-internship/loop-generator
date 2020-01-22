#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(760, "random");
	float *D = create_one_dim_float(400, "random");
	float **B = create_two_dim_float(1000, 910, "random");
	float ***C = create_three_dim_float(880, 320, 30, "random");

	for (int a = 2; a < 395; a++)
	{
	  
	    A[a]=A[a-2]/0.628;
	  
	    A[a]=0.132;
	  
	    D[a]=A[a]*B[a][a];
	    D[a+5]=C[a][a][a]+A[a]-C[a][a][a];
	  
	    D[a]=C[a][a][a];
	}

    return 0;
}