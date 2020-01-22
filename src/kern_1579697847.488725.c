#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(560, 740, "ones");
	double *B = create_one_dim_double(100, "ones");

	for (int a = 4; a < 100; a++)
	{
	  
	    A[a][a]=A[a+2][a+5]*0.658;
	  
	    B[a]=0.377;
	    B[a-2]=0.257;
	  
	    B[a]=A[a][a]/B[a];
	    A[a][a]=A[a-4][a]-B[a];
	}

    return 0;
}