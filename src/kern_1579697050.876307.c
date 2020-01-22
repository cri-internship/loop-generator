#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(960, "ones");

	for (int a = 3; a < 957; a++)
	{
	  
	    A[a]=A[a-3]+0.763;
	  
	    double var_a=A[a]-0.398;
	    double var_b=A[a+3]*0.02;
	}

    return 0;
}