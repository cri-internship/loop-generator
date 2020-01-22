#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(120, 610, 570, "ones");
	double **C = create_two_dim_double(1000, 800, "ones");
	double **B = create_two_dim_double(120, 700, "ones");
	double *A = create_one_dim_double(590, "ones");

	for (int a = 5; a < 115; a++)
	{
	  
	    B[a][a]=B[a+1][a+3]+0.803;
	  
	    C[a][a]=C[a+5][a+1]+0.481;
	  
	    B[a][a]=0.658;
	  
	    C[a][a]=0.926/A[a];
	  
	    A[a]=C[a][a]/0.729+D[a][a][a];
	    A[a-5]=0.427+C[a][a];
	  
	    double var_a=D[a][a][a]-0.955;
	    double var_b=D[a][a+5][a]*0.207;
	}

    return 0;
}