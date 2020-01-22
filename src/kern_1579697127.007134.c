#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(30, "random");
	float **B = create_two_dim_float(650, 390, "random");
	float *D = create_one_dim_float(290, "random");
	float *C = create_one_dim_float(870, "random");

	for (int a = 3; a < 290; a++)
	{
	  
	    D[a]=D[a-3]*0.057;
	  
	    D[a]=0.643;
	  
	    A[a]=B[a][a]-A[a]*C[a]+D[a];
	    C[a]=B[a+2][a+5]/C[a]+D[a]*A[a];
	  
	    float var_b=B[a][a]*0.18;
	    float var_c=B[a-2][a-3]/0.517;
	}

    return 0;
}