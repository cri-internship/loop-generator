#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(760, 970, 330, "zeros");
	double **A = create_two_dim_double(1000, 500, "zeros");
	double **B = create_two_dim_double(250, 710, "zeros");
	double *D = create_one_dim_double(480, "zeros");

	for (int a = 5; a < 478; a++)
	{
	  
	    D[a]=0.244+C[a][a][a];
	    D[a]=D[a]/A[a][a];
	  
	    C[a][a][a]=C[a-3][a-3][a-5]-D[a]*0.887+B[a][a];
	  
	    C[a][a][a]=C[a][a-2][a-2]-B[a][a];
	  
	    C[a][a][a]=C[a][a][a+1]-0.171;
	  
	    double var_a=A[a][a]/0.277;
	    double var_b=A[a+4][a+1]-0.428;
	}

    return 0;
}