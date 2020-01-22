#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(780, 70, "ones");
	float **B = create_two_dim_float(590, 900, "ones");

	for (int a = 5; a < 587; a++)
	{
	  
	    A[a][a]=0.896;
	    float  var_a=A[a][a]*0.603;
	  
	    B[a][a]=B[a-1][a]+0.792;
	  
	    B[a][a]=B[a+3][a+1]+A[a][a];
	  
	    float var_b=A[a][a]/0.04;
	    float var_c=A[a-5][a-5]*0.624;
	}

    return 0;
}