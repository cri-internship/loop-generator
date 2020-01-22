#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(140, "random");
	double **A = create_two_dim_double(190, 580, "random");

	for (int a = 5; a < 140; a++)
	{
	  
	    A[a][a]=B[a];
	    A[a-4][a-2]=0.189;
	  
	    double var_a=B[a]*0.408;
	    double var_b=B[a-5]+0.548;
	}

    return 0;
}