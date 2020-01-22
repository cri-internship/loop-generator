#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(150, 340, "random");
	double *B = create_one_dim_double(790, "random");
	double **A = create_two_dim_double(430, 900, "random");
	double ***D = create_three_dim_double(1000, 240, 340, "random");

	for (int a = 4; a < 146; a++)
	{
	  
	    B[a]=B[a-4]*D[a][a][a]/C[a][a];
	  
	    D[a][a][a]=D[a-1][a][a-1]+A[a][a]*B[a]-A[a][a];
	  
	    D[a][a][a]=B[a];
	  
	    double var_a=B[a]/0.108;
	    double var_b=B[a-2]-0.487;
	  
	    double var_c=C[a][a]/0.597;
	    double var_d=C[a+4][a+1]/0.898;
	}

    return 0;
}