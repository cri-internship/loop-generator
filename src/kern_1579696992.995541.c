#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(160, 320, "ones");
	double ***D = create_three_dim_double(250, 160, 420, "ones");
	double **A = create_two_dim_double(860, 770, "ones");
	double **B = create_two_dim_double(160, 570, "ones");

	for (int a = 5; a < 160; a++)
	{
	  
	    C[a][a]=C[a-3][a-3]*0.826;
	  
	    D[a][a][a]=D[a][a-5][a]/0.932-A[a][a];
	  
	    A[a][a]=A[a+1][a+4]+B[a][a]*D[a][a][a]-B[a][a];
	  
	    double var_a=D[a][a][a]*0.215;
	    double var_b=D[a+3][a+3][a+3]/0.373;
	}

    return 0;
}