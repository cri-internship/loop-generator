#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(410, 980, "random");
	double *A = create_one_dim_double(480, "random");

	for (int a = 0; a < 405; a++)
	{
	  
	    B[a][a]=B[a+2][a+5]*A[a];
	  
	    A[a]=B[a][a];
	    A[a+5]=B[a][a];
	  
	    B[a][a]=A[a]*B[a][a];
	}

    return 0;
}