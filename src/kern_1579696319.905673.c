#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(520, "ones");
	double *C = create_one_dim_double(130, "ones");
	double *D = create_one_dim_double(90, "ones");
	double ***B = create_three_dim_double(260, 410, 600, "ones");

	for (int a = 0; a < 130; a++)
	{
	  
	    double var_a=B[a][a][a]*0.754;
	    double var_b=B[a+3][a+4][a+1]/0.509;
	  
	    A[a]=C[a]/A[a]+B[a][a][a];
	    C[a]=C[a]+D[a];
	}

    return 0;
}