#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(770, 290, 450, "random");
	float **B = create_two_dim_float(420, 390, "random");

	for (int a = 1; a < 418; a++)
	{
	  
	    B[a][a]=B[a][a]*A[a][a][a];
	    A[a][a][a]=B[a][a-1]+A[a][a][a];
	  
	    A[a][a][a]=B[a][a]+0.668;
	    B[a][a]=B[a][a+2]/A[a][a][a];
	}

    return 0;
}