#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(430, "ones");
	float *C = create_one_dim_float(640, "ones");
	float **A = create_two_dim_float(550, 730, "ones");
	float *D = create_one_dim_float(390, "ones");

	for (int a = 5; a < 430; a++)
	{
	  
	    C[a]=C[a-5]/0.465;
	  
	    B[a]=B[a]-A[a][a];
	    B[a]=0.608*D[a];
	  
	    C[a]=B[a]+D[a]/0.679;
	    A[a][a]=B[a-4]-C[a]/D[a]+A[a][a];
	}

    return 0;
}