#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(260, 900, 30, "random");
	float **B = create_two_dim_float(740, 510, "random");
	float *C = create_one_dim_float(610, "random");

	for (int a = 5; a < 256; a++)
	{
	  
	    C[a]=A[a][a][a]-B[a][a];
	    B[a][a]=C[a]*B[a][a]/A[a][a][a];
	  
	    B[a][a]=B[a-5][a-5]*0.812;
	  
	    A[a][a][a]=A[a+2][a+4][a+2]/C[a]*C[a];
	  
	    A[a][a][a]=C[a]*0.385;
	    C[a]=C[a+3]-A[a][a][a];
	  
	    A[a][a][a]=C[a]/B[a][a]+A[a][a][a];
	}

    return 0;
}