#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(680, 130, "ones");
	float ***B = create_three_dim_float(90, 490, 700, "ones");
	float *C = create_one_dim_float(300, "ones");

	for (int a = 2; a < 87; a++)
	{
	  
	    C[a]=0.003;
	    float  var_a=C[a]*0.366;
	  
	    A[a][a]=A[a+2][a]+0.57;
	  
	    A[a][a]=A[a+5][a+3]-0.031;
	  
	    B[a][a][a]=B[a+1][a+3][a]+C[a];
	  
	    C[a]=0.535;
	}

    return 0;
}