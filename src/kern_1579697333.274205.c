#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(40, "zeros");
	double *B = create_one_dim_double(970, "zeros");
	double **A = create_two_dim_double(320, 210, "zeros");
	double **E = create_two_dim_double(830, 60, "zeros");
	double ***D = create_three_dim_double(10, 410, 340, "zeros");

	for (int a = 4; a < 36; a++)
	{
	  
	    C[a]=C[a+4]/0.798;
	  
	    A[a][a]=D[a][a][a]-C[a];
	    A[a-4][a-1]=B[a]/E[a][a]+D[a][a][a];
	  
	    C[a]=E[a][a]+A[a][a]*B[a]-C[a]/D[a][a][a];
	    A[a][a]=E[a][a+2]*B[a]/D[a][a][a]-A[a][a]+0.384;
	}

    return 0;
}