#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(790, 90, 350, "ones");
	double **A = create_two_dim_double(570, 180, "ones");
	double *D = create_one_dim_double(460, "ones");
	double **B = create_two_dim_double(270, 110, "ones");

	for (int a = 5; a < 265; a++)
	{
	  
	    D[a]=D[a-5]/0.289;
	  
	    A[a][a]=A[a+3][a+1]+D[a];
	  
	    D[a]=D[a+2]*0.733;
	  
	    B[a][a]=B[a+1][a]-A[a][a]/C[a][a][a];
	  
	    B[a][a]=D[a];
	  
	    double var_a=B[a][a]/0.623;
	    double var_b=B[a+4][a]+0.83;
	}

    return 0;
}