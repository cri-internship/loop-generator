#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(790, "random");
	double **A = create_two_dim_double(870, 810, "random");
	double **C = create_two_dim_double(320, 990, "random");

	for (int a = 5; a < 315; a++)
	{
	  
	    A[a][a]=A[a-2][a]*0.139;
	  
	    C[a][a]=C[a+5][a+4]*0.499;
	  
	    B[a]=0.713;
	    B[a-3]=0.687;
	  
	    C[a][a]=0.51/B[a];
	  
	    A[a][a]=C[a][a]*B[a];
	    C[a][a]=C[a-5][a-2]/A[a][a];
	  
	    double var_a=B[a]*0.999;
	    double var_b=B[a+5]-0.753;
	}

    return 0;
}