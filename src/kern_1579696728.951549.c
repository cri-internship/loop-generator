#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "ones");
	float *A = create_one_dim_float(60, "ones");
	float *C = create_one_dim_float(20, "ones");
	float **D = create_two_dim_float(410, 80, "ones");

	for (int a = 5; a < 18; a++)
	{
	  
	    D[a][a]=C[a]-D[a][a];
	    C[a]=A[a]*B[a]-A[a];
	  
	    C[a]=C[a+2]*0.399;
	  
	    float var_a=D[a][a]*0.882;
	    float var_b=D[a][a+2]+0.608;
	  
	    float var_c=A[a]*0.253;
	    float var_d=A[a-5]-0.1;
	}

    return 0;
}