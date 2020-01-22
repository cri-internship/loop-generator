#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(730, 910, "random");
	double *A = create_one_dim_double(380, "random");

	for (int a = 0; a < 375; a++)
	{
	  
	    B[a][a]=B[a+3][a+5]/A[a];
	  
	    A[a]=B[a][a];
	    A[a+5]=0.835;
	}

    return 0;
}