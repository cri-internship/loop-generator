#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(550, 570, "random");
	float **B = create_two_dim_float(640, 230, "random");

	for (int a = 5; a < 546; a++)
	{
	  
	    A[a][a]=A[a-2][a-2]*B[a][a];
	  
	    B[a][a]=B[a-5][a]+0.175;
	  
	    A[a][a]=A[a+3][a+4]+B[a][a];
	  
	    float var_a=A[a][a]/0.404;
	    float var_b=A[a+3][a+1]/0.611;
	  
	    float var_c=B[a][a]+0.625;
	    float var_d=B[a+1][a+3]+0.033;
	}

    return 0;
}