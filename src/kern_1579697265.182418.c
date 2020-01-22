#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(380, 910, "zeros");
	double *B = create_one_dim_double(70, "zeros");
	double *D = create_one_dim_double(720, "zeros");
	double ***C = create_three_dim_double(690, 920, 920, "zeros");

	for (int a = 1; a < 70; a++)
	{
	  
	    B[a]=B[a-1]-D[a];
	  
	    D[a]=D[a-1]-0.919;
	  
	    A[a][a]=0.488;
	    A[a][a+3]=0.899;
	  
	    D[a]=A[a][a];
	}

    return 0;
}