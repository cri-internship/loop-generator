#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(530, "zeros");
	float **D = create_two_dim_float(490, 120, "zeros");
	float ***A = create_three_dim_float(710, 970, 360, "zeros");
	float **B = create_two_dim_float(580, 860, "zeros");

	for (int a = 5; a < 490; a++)
	{
	  
	    B[a][a]=B[a-3][a-1]-A[a][a][a]+D[a][a];
	  
	    B[a][a]=B[a+4][a]/0.11;
	  
	    A[a][a][a]=A[a+3][a][a+3]-0.535;
	  
	    D[a][a]=C[a]+B[a][a]*C[a];
	    D[a][a]=A[a][a][a];
	  
	    C[a]=B[a][a]-A[a][a][a];
	    C[a-5]=A[a][a][a]+D[a][a];
	}

    return 0;
}