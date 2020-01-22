#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(480, "random");
	double ***D = create_three_dim_double(780, 520, 350, "random");
	double **A = create_two_dim_double(240, 140, "random");
	double *C = create_one_dim_double(620, "random");

	for (int a = 5; a < 480; a++)
	{
	  
	    B[a]=B[a-1]*0.634;
	  
	    B[a]=B[a-2]/D[a][a][a];
	  
	    D[a][a][a]=C[a]+B[a];
	    C[a]=D[a][a][a]+A[a][a]*B[a];
	  
	    D[a][a][a]=D[a+5][a+4][a+2]-0.427;
	}

    return 0;
}