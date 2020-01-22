#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(30, 740, "ones");
	double *E = create_one_dim_double(610, "ones");
	double ***C = create_three_dim_double(600, 840, 860, "ones");
	double *A = create_one_dim_double(40, "ones");
	double **B = create_two_dim_double(600, 710, "ones");

	for (int a = 5; a < 40; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-3][a-4]*D[a][a]/0.004-E[a];
	  
	    B[a][a]=B[a-4][a-2]-0.517;
	  
	    C[a][a][a]=C[a-5][a-3][a-5]-B[a][a]/B[a][a]+D[a][a]*A[a];
	  
	    A[a]=C[a][a][a]*E[a];
	    A[a]=D[a][a]*B[a][a];
	  
	    A[a]=C[a][a][a]*E[a]+D[a][a];
	    C[a][a][a]=C[a+2][a+2][a+4]*D[a][a]/A[a];
	}

    return 0;
}