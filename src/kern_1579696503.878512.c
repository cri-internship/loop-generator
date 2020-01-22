#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(680, 420, "random");
	float *C = create_one_dim_float(40, "random");
	float **A = create_two_dim_float(850, 340, "random");

	for (int a = 4; a < 36; a++)
	{
	  
	    B[a][a]=0.367;
	    float  var_a=B[a][a]-0.847;
	  
	    C[a]=C[a-4]-B[a][a]/A[a][a];
	  
	    B[a][a]=B[a-2][a-3]+C[a]*A[a][a];
	  
	    A[a][a]=0.314;
	    A[a-4][a-2]=0.714;
	  
	    float var_b=C[a]*0.195;
	    float var_c=C[a+4]-0.875;
	  
	    float var_d=A[a][a]-0.103;
	    float var_e=A[a-1][a-3]/0.432;
	}

    return 0;
}