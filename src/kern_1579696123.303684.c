#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(600, 160, 20, "zeros");
	double ***C = create_three_dim_double(60, 1000, 310, "zeros");
	double **A = create_two_dim_double(180, 220, "zeros");

	for (int a = 5; a < 57; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-2][a-1]+A[a][a];
	  
	    C[a][a][a]=C[a+1][a][a+1]/B[a][a][a]+B[a][a][a];
	  
	    B[a][a][a]=B[a+2][a+3][a+4]*C[a][a][a]-C[a][a][a];
	  
	    A[a][a]=A[a][a]/C[a][a][a];
	    B[a][a][a]=A[a][a-3]/0.79+B[a][a][a];
	  
	    C[a][a][a]=A[a][a]-B[a][a][a];
	    C[a][a][a]=A[a+3][a+5]+0.006;
	  
	    double var_a=C[a][a][a]-0.011;
	    double var_b=C[a+2][a+3][a]-0.43;
	}

    return 0;
}