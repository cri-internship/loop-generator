#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(560, 820, "zeros");
	double *B = create_one_dim_double(70, "zeros");
	double *A = create_one_dim_double(980, "zeros");

	for (int a = 5; a < 556; a++)
	{
	  
	    A[a]=A[a-5]-B[a]*C[a][a];
	  
	    A[a]=A[a-2]/0.381;
	  
	    C[a][a]=C[a][a-4]/A[a];
	  
	    C[a][a]=C[a+1][a+2]/A[a]-B[a];
	  
	    A[a]=A[a+5]/0.337;
	  
	    double var_a=C[a][a]-0.785;
	    double var_b=C[a+4][a+4]*0.534;
	}

    return 0;
}