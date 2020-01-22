#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(600, 880, 310, "ones");
	double *B = create_one_dim_double(290, "ones");
	double *A = create_one_dim_double(590, "ones");
	double ***E = create_three_dim_double(240, 760, 320, "ones");
	double *D = create_one_dim_double(300, "ones");

	for (int a = 4; a < 590; a++)
	{
	  
	    A[a]=C[a][a][a]+B[a]-E[a][a][a]/D[a];
	    A[a]=D[a]+C[a][a][a]/E[a][a][a]*B[a];
	  
	    E[a][a][a]=A[a]+B[a];
	    B[a]=A[a-4]/C[a][a][a];
	}

    return 0;
}