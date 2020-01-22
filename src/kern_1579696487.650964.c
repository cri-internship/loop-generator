#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(870, "zeros");
	double **B = create_two_dim_double(730, 840, "zeros");
	double ***C = create_three_dim_double(80, 240, 750, "zeros");

	for (int a = 5; a < 80; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-5][a]-A[a]+B[a][a];
	  
	    A[a]=A[a+3]-0.774;
	  
	    C[a][a][a]=C[a][a][a]+A[a];
	    A[a]=C[a-4][a-2][a-2]/A[a];
	}

    return 0;
}