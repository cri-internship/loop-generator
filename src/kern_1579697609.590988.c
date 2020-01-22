#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(580, "zeros");
	double ***B = create_three_dim_double(990, 890, 910, "zeros");
	double **C = create_two_dim_double(670, 970, "zeros");

	for (int a = 2; a < 670; a++)
	{
	  
	    C[a][a]=B[a][a][a]*A[a];
	    C[a-1][a-2]=A[a]-B[a][a][a];
	  
	    C[a][a]=0.059;
	}

    return 0;
}