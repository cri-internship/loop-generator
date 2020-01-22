#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(720, "ones");
	double **B = create_two_dim_double(590, 630, "ones");
	double *D = create_one_dim_double(60, "ones");
	double ***C = create_three_dim_double(840, 200, 630, "ones");
	double **A = create_two_dim_double(730, 30, "ones");

	for (int a = 4; a < 588; a++)
	{
	  
	    B[a][a]=0.154;
	    B[a-2][a-4]=C[a][a][a]-E[a]*A[a][a];
	  
	    B[a][a]=0.289;
	}

    return 0;
}