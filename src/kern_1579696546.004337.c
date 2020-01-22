#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(770, "zeros");
	float *A = create_one_dim_float(350, "zeros");
	float ***B = create_three_dim_float(660, 290, 720, "zeros");

	for (int a = 5; a < 350; a++)
	{
	  
	    C[a]=C[a+1]*0.476;
	  
	    B[a][a][a]=A[a];
	    B[a-5][a-3][a-2]=C[a];
	  
	    B[a][a][a]=C[a]/A[a];
	  
	    float var_a=A[a]*0.224;
	    float var_b=A[a-5]/0.32;
	  
	    float var_c=C[a]-0.183;
	    float var_d=C[a+5]-0.302;
	}

    return 0;
}