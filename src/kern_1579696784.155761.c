#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(110, "ones");
	double ***C = create_three_dim_double(700, 640, 360, "ones");
	double **A = create_two_dim_double(860, 450, "ones");

	for (int a = 4; a < 110; a++)
	{
	  
	    B[a]=B[a-4]*0.849/C[a][a][a];
	  
	    C[a][a][a]=C[a+2][a+4][a]*0.79;
	  
	    C[a][a][a]=0.353;
	  
	    A[a][a]=C[a][a][a]*B[a];
	    C[a][a][a]=C[a][a+4][a+4]+0.901;
	}

    return 0;
}