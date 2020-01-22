#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(190, 550, "ones");
	double *C = create_one_dim_double(40, "ones");
	double *B = create_one_dim_double(140, "ones");

	for (int a = 5; a < 140; a++)
	{
	  
	    B[a]=B[a-1]/0.659;
	  
	    A[a][a]=A[a][a+2]*0.998;
	  
	    A[a][a]=0.739;
	  
	    C[a]=A[a][a]/B[a];
	    B[a]=A[a-5][a-1]+C[a]*B[a];
	}

    return 0;
}