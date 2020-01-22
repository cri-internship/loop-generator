#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(990, "zeros");
	double **D = create_two_dim_double(280, 810, "zeros");
	double *B = create_one_dim_double(310, "zeros");
	double **A = create_two_dim_double(220, 410, "zeros");

	for (int a = 4; a < 220; a++)
	{
	  
	    B[a]=B[a-3]+A[a][a]-C[a]*D[a][a];
	  
	    A[a][a]=A[a-1][a-3]/0.353;
	  
	    C[a]=0.124;
	    C[a-2]=0.571;
	  
	    D[a][a]=C[a]/B[a]*A[a][a];
	    C[a]=C[a-4]+D[a][a]*A[a][a]-0.897;
	}

    return 0;
}