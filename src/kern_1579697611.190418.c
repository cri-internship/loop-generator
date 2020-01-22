#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(810, 520, "random");
	double *A = create_one_dim_double(280, "random");

	for (int a = 4; a < 277; a++)
	{
	  
	    A[a]=A[a-4]/0.327;
	  
	    A[a]=A[a+3]+0.132;
	  
	    B[a][a]=0.397;
	    B[a-4][a-2]=0.511;
	  
	    double var_a=B[a][a]-0.397;
	    double var_b=B[a-1][a-2]+0.561;
	  
	    double var_c=A[a]+0.108;
	    double var_d=A[a+2]+0.555;
	}

    return 0;
}