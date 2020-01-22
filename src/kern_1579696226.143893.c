#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(820, 410, "ones");
	double *A = create_one_dim_double(650, "ones");
	double *C = create_one_dim_double(850, "ones");

	for (int a = 4; a < 650; a++)
	{
	  
	    C[a]=C[a-3]-B[a][a];
	  
	    B[a][a]=0.279;
	    B[a+4][a]=0.52;
	  
	    double var_a=B[a][a]*0.69;
	    double var_b=B[a][a-2]/0.991;
	  
	    C[a]=A[a]-C[a];
	    B[a][a]=A[a-4]-B[a][a];
	}

    return 0;
}