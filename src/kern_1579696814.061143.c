#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(260, 430, "random");

	for (int a = 0; a < 258; a++)
	{
	  
	    A[a][a]=0.165;
	    A[a+1][a+2]=0.43;
	  
	    float var_a=A[a][a]-0.907;
	    float var_b=A[a][a+2]-0.876;
	}

    return 0;
}