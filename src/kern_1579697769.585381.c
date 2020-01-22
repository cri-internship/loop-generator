#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(440, 860, 310, "random");
	double **C = create_two_dim_double(790, 300, "random");
	double **B = create_two_dim_double(520, 410, "random");

	for (int a = 4; a < 440; a++)
	{
	  
	    B[a][a]=B[a-4][a-3]+A[a][a][a];
	  
	    double var_a=A[a][a][a]-0.208;
	    double var_b=A[a-4][a-3][a-2]*0.475;
	}

    return 0;
}