#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(140, "random");
	float *B = create_one_dim_float(30, "random");
	float ***C = create_three_dim_float(210, 470, 60, "random");
	float *A = create_one_dim_float(420, "random");

	for (int a = 5; a < 25; a++)
	{
	  
	    A[a]=A[a-5]*0.307;
	  
	    C[a][a][a]=0.68;
	    C[a+3][a+5][a+2]=0.513;
	  
	    C[a][a][a]=0.071-D[a]/A[a];
	  
	    float var_a=D[a]*0.373;
	  
	    float var_c=B[a]-0.77;
	    float var_d=B[a]-0.709;
	  
	    float var_e=B[a]/0.3;
	    float var_f=B[a+5]*0.423;
	}

    return 0;
}