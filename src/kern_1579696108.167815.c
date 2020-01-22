#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(290, 460, "ones");
	float *C = create_one_dim_float(130, "ones");
	float *A = create_one_dim_float(370, "ones");

	for (int a = 4; a < 130; a++)
	{
	  
	    A[a]=A[a+2]-C[a];
	  
	    C[a]=0.48;
	    C[a-4]=0.047;
	  
	    B[a][a]=0.269;
	    B[a+3][a]=C[a]*A[a];
	  
	    B[a][a]=A[a]/C[a];
	  
	    B[a][a]=C[a]/B[a][a]-A[a];
	    C[a]=C[a-3]-A[a];
	  
	    float var_a=B[a][a]*0.557;
	    float var_b=B[a+2][a]*0.472;
	}

    return 0;
}