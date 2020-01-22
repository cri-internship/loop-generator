#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(550, 160, "ones");
	double ***C = create_three_dim_double(510, 220, 50, "ones");
	double **B = create_two_dim_double(250, 390, "ones");
	double *A = create_one_dim_double(20, "ones");

	for (int a = 5; a < 245; a++)
	{
	  
	    B[a][a]=A[a]-D[a][a]+C[a][a][a];
	    B[a+2][a+5]=D[a][a]/A[a];
	  
	    B[a][a]=C[a][a][a];
	  
	    double var_a=B[a][a]+0.935;
	    double var_b=B[a][a-5]*0.278;
	}

    return 0;
}