#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(200, 100, 920, "zeros");
	double *B = create_one_dim_double(670, "zeros");

	for (int a = 5; a < 196; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a-2]-B[a];
	  
	    B[a]=0.078;
	    B[a+4]=0.248;
	  
	    A[a][a][a]=B[a];
	  
	    B[a]=A[a][a][a]+0.25;
	    A[a][a][a]=A[a][a-4][a-4]+0.746;
	  
	    double var_a=B[a]*0.484;
	    double var_b=B[a-3]-0.347;
	}

    return 0;
}