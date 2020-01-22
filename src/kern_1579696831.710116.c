#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(70, 670, 30, "ones");
	double ***C = create_three_dim_double(540, 140, 860, "ones");
	double *B = create_one_dim_double(380, "ones");

	for (int a = 5; a < 70; a++)
	{
	  
	    B[a]=B[a-5]/0.754;
	  
	    C[a][a][a]=C[a+5][a+3][a+1]*B[a]+B[a];
	  
	    B[a]=B[a+1]+C[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]+B[a]*C[a][a][a];
	    C[a][a][a]=A[a][a-2][a-5]/C[a][a][a];
	  
	    double var_a=B[a]*0.248;
	    double var_b=B[a+4]-0.935;
	}

    return 0;
}