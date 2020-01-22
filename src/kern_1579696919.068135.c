#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(490, 120, 900, "ones");
	double **C = create_two_dim_double(500, 540, "ones");
	double ***A = create_three_dim_double(60, 540, 600, "ones");

	for (int a = 4; a < 55; a++)
	{
	  
	    C[a][a]=C[a-1][a]+0.866;
	  
	    A[a][a][a]=A[a+5][a+4][a]/B[a][a][a];
	  
	    B[a][a][a]=0.525;
	    B[a+1][a+4][a+2]=0.197;
	  
	    B[a][a][a]=0.891;
	  
	    B[a][a][a]=B[a][a][a]/C[a][a]*A[a][a][a];
	    A[a][a][a]=B[a][a][a-4]+A[a][a][a]*C[a][a];
	  
	    double var_a=C[a][a]/0.724;
	    double var_b=C[a-3][a-2]/0.948;
	}

    return 0;
}