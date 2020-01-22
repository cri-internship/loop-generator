#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(970, "random");
	double *A = create_one_dim_double(940, "random");

	for (int a = 2; a < 936; a++)
	{
	  
	    B[a]=B[a-1]*0.005;
	  
	    B[a]=B[a-2]+0.921;
	  
	    A[a]=A[a+4]/0.798;
	  
	    B[a]=B[a]-A[a];
	    A[a]=B[a]-0.88;
	}

    return 0;
}