#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(230, "random");
	double **B = create_two_dim_double(740, 380, "random");
	double **C = create_two_dim_double(40, 150, "random");

	for (int a = 2; a < 35; a++)
	{
	  
	    A[a]=A[a-2]-C[a][a]+0.805;
	  
	    C[a][a]=C[a+2][a+5]+0.134;
	  
	    A[a]=0.41;
	  
	    B[a][a]=A[a];
	    B[a+5][a+1]=C[a][a];
	}

    return 0;
}