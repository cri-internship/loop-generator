#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(110, 460, "zeros");
	double **A = create_two_dim_double(240, 680, "zeros");
	double *C = create_one_dim_double(620, "zeros");

	for (int a = 2; a < 110; a++)
	{
	  
	    B[a][a]=A[a][a]-C[a];
	    B[a][a-2]=C[a]+A[a][a];
	}

    return 0;
}