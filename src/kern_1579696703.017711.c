#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(40, 880, 170, "ones");
	double ***C = create_three_dim_double(840, 20, 980, "ones");
	double *A = create_one_dim_double(620, "ones");
	double **D = create_two_dim_double(770, 250, "ones");

	for (int a = 5; a < 36; a++)
	{
	  
	    A[a]=A[a-5]/0.817;
	  
	    D[a][a]=D[a-5][a-3]*0.256;
	  
	    B[a][a][a]=B[a+1][a+4][a+4]+0.308;
	  
	    D[a][a]=D[a+2][a+5]/0.224;
	  
	    double var_a=D[a][a]+0.566;
	    double var_b=D[a+4][a+3]*0.389;
	  
	    A[a]=B[a][a][a]/A[a]-D[a][a]+C[a][a][a];
	    D[a][a]=B[a-4][a][a]+C[a][a][a];
	  
	    double var_c=B[a][a][a]/0.133;
	    double var_d=B[a+2][a+4][a]/0.374;
	}

    return 0;
}