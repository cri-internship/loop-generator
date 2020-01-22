#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(230, 570, "ones");
	float *C = create_one_dim_float(260, "ones");
	float *B = create_one_dim_float(950, "ones");
	float *A = create_one_dim_float(630, "ones");

	for (int a = 1; a < 230; a++)
	{
	  
	    A[a]=A[a-1]+D[a][a]/B[a]*C[a];
	  
	    D[a][a]=0.698;
	    D[a][a-1]=0.859;
	}

    return 0;
}