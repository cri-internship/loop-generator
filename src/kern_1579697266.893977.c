#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(60, 220, 860, "ones");
	double **B = create_two_dim_double(630, 690, "ones");

	for (int a = 4; a < 60; a++)
	{
	  
	    B[a][a]=B[a-4][a-4]*0.514;
	  
	    A[a][a][a]=A[a-1][a-2][a-4]-0.9;
	  
	    B[a][a]=B[a+2][a]+0.171;
	  
	    B[a][a]=B[a+3][a+4]+0.668;
	  
	    double var_a=B[a][a]/0.812;
	    double var_b=B[a-1][a-3]*0.249;
	  
	    B[a][a]=B[a][a]-A[a][a][a];
	    A[a][a][a]=B[a][a+4]/A[a][a][a];
	}

    return 0;
}