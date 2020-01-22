#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(310, 190, "zeros");
	double *A = create_one_dim_double(730, "zeros");
	double **C = create_two_dim_double(590, 870, "zeros");
	double **E = create_two_dim_double(740, 240, "zeros");
	double *B = create_one_dim_double(560, "zeros");

	for (int a = 4; a < 305; a++)
	{
	  
	    B[a]=B[a-3]/0.996;
	  
	    D[a][a]=0.28;
	    D[a-3][a-4]=0.489;
	  
	    D[a][a]=C[a][a]/A[a]-B[a];
	  
	    double var_a=B[a]/0.291;
	    double var_b=B[a+5]/0.427;
	}

    return 0;
}