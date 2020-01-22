#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(880, "ones");
	double **C = create_two_dim_double(260, 480, "ones");
	double **B = create_two_dim_double(370, 600, "ones");
	double *A = create_one_dim_double(790, "ones");

	for (int a = 4; a < 255; a++)
	{
	  
	    double var_a=D[a]-0.133;
	    D[a]=0.814;
	  
	    C[a][a]=C[a+5][a+1]*D[a]-B[a][a];
	  
	    B[a][a]=A[a]+0.443;
	    C[a][a]=A[a-4]*C[a][a];
	}

    return 0;
}