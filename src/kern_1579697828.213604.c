#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(690, 410, 680, "ones");
	double *B = create_one_dim_double(70, "ones");
	double ***A = create_three_dim_double(490, 990, 820, "ones");

	for (int a = 5; a < 70; a++)
	{
	  
	    A[a][a][a]=A[a-4][a][a]*B[a]-C[a][a][a];
	  
	    B[a]=B[a-2]/0.742;
	  
	    C[a][a][a]=C[a-1][a-4][a-1]-B[a]+A[a][a][a];
	  
	    A[a][a][a]=A[a-3][a-3][a-4]/0.255;
	  
	    B[a]=A[a][a][a]*B[a]/C[a][a][a];
	    C[a][a][a]=A[a-1][a-1][a-2]+B[a]/C[a][a][a];
	  
	    double var_a=C[a][a][a]/0.554;
	    double var_b=C[a-5][a-5][a-3]+0.878;
	}

    return 0;
}