#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(170, "random");
	float **B = create_two_dim_float(220, 450, "random");

	for (int a = 0; a < 165; a++)
	{
	  
	    A[a]=0.861;
	    float  var_a=A[a]/0.169;
	  
	    B[a][a]=A[a];
	    B[a+1][a+5]=A[a];
	  
	    A[a]=B[a][a];
	  
	    A[a]=A[a]*B[a][a];
	    B[a][a]=A[a+5]/B[a][a];
	}

    return 0;
}