#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(440, "random");
	double ***C = create_three_dim_double(1000, 510, 380, "random");
	double *A = create_one_dim_double(950, "random");

	for (int a = 4; a < 440; a++)
	{
	  
	    B[a]=0.945;
	    A[a]=B[a]/A[a];
	  
	    C[a][a][a]=A[a]/0.805;
	    A[a]=C[a][a][a];
	  
	    A[a]=A[a+5]*B[a]+0.414;
	  
	    double var_a=C[a][a][a]*0.994;
	    double var_b=C[a-4][a][a-1]-0.236;
	}

    return 0;
}