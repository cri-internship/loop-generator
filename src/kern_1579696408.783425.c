#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(920, 680, 990, "zeros");
	double *B = create_one_dim_double(220, "zeros");
	double ***C = create_three_dim_double(570, 360, 220, "zeros");
	double *A = create_one_dim_double(50, "zeros");

	for (int a = 5; a < 220; a++)
	{
	  
	    B[a]=B[a-3]*0.538;
	  
	    D[a][a][a]=C[a][a][a]*B[a];
	    D[a+3][a+1][a+5]=0.514+C[a][a][a]/A[a];
	  
	    C[a][a][a]=D[a][a][a]+B[a]*D[a][a][a];
	    C[a][a-1][a-5]=B[a]-A[a];
	  
	    D[a][a][a]=0.058;
	  
	    double var_a=D[a][a][a]*0.523;
	    double var_b=D[a-5][a][a-4]*0.813;
	}

    return 0;
}