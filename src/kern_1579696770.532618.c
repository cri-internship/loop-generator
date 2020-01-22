#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(950, 350, "random");
	float ***B = create_three_dim_float(240, 860, 830, "random");
	float **D = create_two_dim_float(350, 900, "random");
	float *C = create_one_dim_float(700, "random");

	for (int a = 2; a < 700; a++)
	{
	  
	    A[a][a]=A[a-1][a-2]*0.788;
	  
	    B[a][a][a]=C[a]+A[a][a];
	    C[a]=B[a][a][a];
	}

    return 0;
}