#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(850, "random");
	double ***C = create_three_dim_double(240, 380, 120, "random");
	double **B = create_two_dim_double(440, 890, "random");

	for (int a = 2; a < 235; a++)
	{
	  
	    A[a]=A[a-2]/0.002;
	  
	    C[a][a][a]=C[a][a][a]-B[a][a]+A[a];
	    A[a]=C[a+5][a+3][a+2]-A[a]/0.668;
	}

    return 0;
}