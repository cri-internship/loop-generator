#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(570, "random");
	float **B = create_two_dim_float(430, 30, "random");
	float ***C = create_three_dim_float(300, 350, 740, "random");

	for (int a = 4; a < 295; a++)
	{
	  
	    A[a]=A[a+5]+B[a][a];
	  
	    C[a][a][a]=C[a+5][a][a+2]/A[a]*A[a];
	  
	    C[a][a][a]=0.037+A[a];
	  
	    float var_a=A[a]*0.918;
	  
	    float var_c=B[a][a]*0.604;
	    float var_d=B[a-2][a-3]/0.742;
	}

    return 0;
}