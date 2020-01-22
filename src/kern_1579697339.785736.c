#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(990, "random");
	float **B = create_two_dim_float(260, 230, "random");
	float *D = create_one_dim_float(520, "random");
	float **C = create_two_dim_float(10, 590, "random");

	for (int a = 0; a < 255; a++)
	{
	  
	    D[a]=D[a+2]-0.118;
	  
	    B[a][a]=B[a+5][a+1]/C[a][a]-A[a];
	  
	    B[a][a]=0.698;
	}

    return 0;
}