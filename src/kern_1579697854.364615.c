#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(940, 720, 480, "zeros");
	float *A = create_one_dim_float(470, "zeros");

	for (int a = 5; a < 470; a++)
	{
	  
	    A[a]=A[a-3]*0.893;
	  
	    B[a][a][a]=B[a-5][a-4][a-5]*A[a];
	  
	    B[a][a][a]=B[a-3][a][a-2]*0.105;
	  
	    B[a][a][a]=A[a]*0.035;
	  
	    B[a][a][a]=B[a+1][a][a]-A[a];
	  
	    float var_a=A[a]/0.914;
	    A[a]=0.623;
	  
	    float var_b=B[a][a][a]*0.533;
	    float var_c=B[a+3][a+2][a]-0.778;
	}

    return 0;
}