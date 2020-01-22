#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(560, "random");
	double *B = create_one_dim_double(320, "random");
	double *A = create_one_dim_double(380, "random");

	for (int a = 3; a < 320; a++)
	{
	  
	    B[a]=C[a]/B[a];
	    C[a]=A[a];
	  
	    A[a]=A[a+2]*0.082;
	  
	    A[a]=0.125;
	  
	    C[a]=A[a]/C[a];
	    A[a]=A[a-3]+B[a]-C[a];
	  
	    double var_a=B[a]+0.784;
	    double var_b=B[a-1]/0.581;
	}

    return 0;
}