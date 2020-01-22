#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(640, 390, "ones");
	double *A = create_one_dim_double(570, "ones");

	for (int a = 5; a < 567; a++)
	{
	  
	    A[a]=A[a-4]-0.994;
	  
	    B[a][a]=B[a-5][a-4]+A[a];
	  
	    A[a]=A[a+3]+0.484;
	  
	    B[a][a]=B[a][a]/0.57;
	    A[a]=B[a-5][a-1]-0.59;
	  
	    double var_a=B[a][a]*0.535;
	    double var_b=B[a-3][a-1]/0.64;
	}

    return 0;
}