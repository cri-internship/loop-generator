#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(860, "zeros");
	double **A = create_two_dim_double(450, 610, "zeros");

	for (int a = 5; a < 445; a++)
	{
	  
	    A[a][a]=A[a-1][a-5]+0.254;
	  
	    A[a][a]=A[a+2][a+5]+0.587;
	  
	    B[a]=A[a][a];
	    B[a+3]=A[a][a];
	}

    return 0;
}