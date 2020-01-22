#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(820, 430, "ones");
	double ***B = create_three_dim_double(800, 120, 590, "ones");
	double **C = create_two_dim_double(630, 230, "ones");

	for (int a = 5; a < 625; a++)
	{
	  
	    A[a][a]=0.949;
	    A[a-5][a]=0.898;
	  
	    A[a][a]=B[a][a][a]/C[a][a];
	  
	    A[a][a]=A[a][a]+C[a][a]*B[a][a][a];
	    C[a][a]=A[a][a-1]/B[a][a][a];
	  
	    double var_a=C[a][a]+0.914;
	    double var_b=C[a+5][a+2]-0.196;
	  
	    B[a][a][a]=A[a][a]*0.931;
	    A[a][a]=A[a+2][a+4]/C[a][a];
	  
	    double var_c=B[a][a][a]/0.075;
	    double var_d=B[a][a-3][a-5]-0.75;
	}

    return 0;
}