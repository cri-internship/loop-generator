#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(420, 110, "zeros");
	double ***B = create_three_dim_double(340, 840, 750, "zeros");

	for (int a = 0; a < 335; a++)
	{
	  
	    A[a][a]=A[a+5][a]-B[a][a][a];
	  
	    double var_a=B[a][a][a]-0.025;
	    double var_b=B[a+5][a+2][a+1]*0.179;
	  
	    A[a][a]=B[a][a][a]+A[a][a];
	    B[a][a][a]=B[a+2][a+1][a+5]+A[a][a];
	}

    return 0;
}