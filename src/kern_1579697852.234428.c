#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(430, 330, "random");
	double *B = create_one_dim_double(790, "random");

	for (int a = 3; a < 430; a++)
	{
	  
	    B[a]=B[a-3]/0.551;
	  
	    B[a]=A[a][a]*B[a];
	    A[a][a]=A[a-1][a-3]-B[a];
	  
	    A[a][a]=B[a]-0.651;
	    A[a][a]=B[a-1]*A[a][a];
	}

    return 0;
}