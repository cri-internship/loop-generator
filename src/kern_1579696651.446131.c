#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(100, "zeros");
	double *B = create_one_dim_double(310, "zeros");

	for (int a = 0; a < 98; a++)
	{
	  
	    double var_a=A[a]+0.352;
	    double var_b=A[a+2]-0.7;
	}

    return 0;
}