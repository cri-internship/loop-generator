#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 650, "random");
	double **A = create_two_dim_double(340, 460, "random");

	for (int a = 4; a < 235; a++)
	{
	  
	    B[a][a]=B[a-4][a-3]*0.22;
	  
	    B[a][a]=A[a][a];
	  
	    B[a][a]=A[a][a]*B[a][a];
	    A[a][a]=A[a-2][a-3]-B[a][a];
	}

    return 0;
}