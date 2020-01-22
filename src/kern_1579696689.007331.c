#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(550, 50, "zeros");
	double *B = create_one_dim_double(700, "zeros");
	double *C = create_one_dim_double(220, "zeros");

	for (int a = 3; a < 219; a++)
	{
	  
	    C[a]=C[a-1]/0.168;
	  
	    A[a][a]=A[a-2][a-3]/0.873;
	  
	    A[a][a]=A[a+3][a+1]+0.976;
	  
	    C[a]=A[a][a]*C[a];
	    B[a]=A[a][a+3]+0.337;
	  
	    double var_a=C[a]/0.514;
	    double var_b=C[a+1]/0.751;
	}

    return 0;
}