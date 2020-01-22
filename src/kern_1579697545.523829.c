#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(220, 140, "random");
	double ***B = create_three_dim_double(870, 20, 920, "random");

	for (int a = 5; a < 218; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-4][a-3]+0.012;
	  
	    A[a][a]=A[a+1][a+2]+0.709;
	  
	    double var_a=A[a][a]+0.839;
	    double var_b=A[a-2][a-3]/0.515;
	}

    return 0;
}