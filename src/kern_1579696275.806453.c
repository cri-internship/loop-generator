#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(240, "zeros");
	double *C = create_one_dim_double(820, "zeros");
	double ***B = create_three_dim_double(920, 430, 410, "zeros");

	for (int a = 5; a < 238; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-4][a-5]-C[a];
	  
	    A[a]=A[a-3]/0.013;
	  
	    C[a]=C[a-1]*B[a][a][a]/A[a];
	  
	    A[a]=C[a];
	  
	    C[a]=A[a]*B[a][a][a];
	    A[a]=A[a+2]+B[a][a][a]-C[a];
	  
	    double var_a=A[a]/0.077;
	}

    return 0;
}