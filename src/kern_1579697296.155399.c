#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(760, 730, "random");
	double *A = create_one_dim_double(790, "random");
	double **B = create_two_dim_double(610, 480, "random");

	for (int a = 5; a < 605; a++)
	{
	  
	    B[a][a]=C[a][a]+0.501;
	    B[a+4][a+5]=0.217;
	  
	    B[a][a]=B[a][a]/A[a]-C[a][a];
	    A[a]=B[a-5][a-2]-A[a];
	}

    return 0;
}