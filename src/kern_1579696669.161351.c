#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(740, "ones");
	float **A = create_two_dim_float(290, 510, "ones");

	for (int a = 5; a < 290; a++)
	{
	  
	    B[a]=B[a+1]*A[a][a];
	  
	    B[a]=0.912;
	  
	    B[a]=B[a]/0.495;
	    A[a][a]=B[a-3]-A[a][a];
	  
	    B[a]=A[a][a]/B[a];
	    B[a]=A[a-2][a-5]+B[a];
	  
	    float var_a=A[a][a]+0.844;
	    float var_b=A[a][a-5]*0.202;
	}

    return 0;
}