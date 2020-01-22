#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(90, 280, 750, "zeros");
	double **A = create_two_dim_double(990, 220, "zeros");
	double **C = create_two_dim_double(600, 400, "zeros");

	for (int a = 5; a < 87; a++)
	{
	  
	    A[a][a]=0.849;
	    C[a][a]=A[a][a]+B[a][a][a];
	  
	    B[a][a][a]=B[a-4][a-4][a-5]*0.831;
	  
	    B[a][a][a]=B[a+3][a][a+1]*0.168/C[a][a];
	  
	    double var_a=B[a][a][a]-0.112;
	    double var_b=B[a-4][a-5][a-5]/0.753;
	}

    return 0;
}