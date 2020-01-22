#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(90, "zeros");
	float **A = create_two_dim_float(10, 330, "zeros");

	for (int a = 5; a < 6; a++)
	{
	  
	    B[a]=B[a-3]/0.744;
	  
	    B[a]=B[a-5]/0.679;
	  
	    A[a][a]=A[a+2][a+3]-0.5;
	  
	    A[a][a]=A[a+2][a+1]*0.524;
	  
	    float var_a=A[a][a]+0.973;
	    float var_b=A[a+4][a+2]/0.253;
	  
	    B[a]=A[a][a]*B[a];
	    A[a][a]=A[a+1][a]/B[a];
	}

    return 0;
}