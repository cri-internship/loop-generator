#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(710, 670, 750, "zeros");
	double *C = create_one_dim_double(940, "zeros");
	double *B = create_one_dim_double(410, "zeros");
	double *D = create_one_dim_double(630, "zeros");
	double **A = create_two_dim_double(980, 350, "zeros");

	for (int a = 0; a < 408; a++)
	{
	  
	    B[a]=C[a]/0.267+A[a][a]-D[a];
	    B[a+2]=D[a];
	  
	    E[a][a][a]=B[a]-C[a];
	    E[a+1][a+1][a+1]=C[a]+D[a]*B[a];
	}

    return 0;
}