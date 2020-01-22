#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(120, 590, "zeros");
	double *A = create_one_dim_double(50, "zeros");

	for (int a = 5; a < 48; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]/A[a];
	  
	    B[a][a]=B[a-3][a-1]-0.183;
	  
	    B[a][a]=B[a+5][a+2]/A[a];
	  
	    A[a]=A[a+2]/B[a][a];
	  
	    A[a]=0.548;
	  
	    double var_a=B[a][a]-0.32;
	    double var_b=B[a+3][a+1]-0.551;
	}

    return 0;
}