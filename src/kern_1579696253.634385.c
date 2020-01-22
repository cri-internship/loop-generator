#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(530, 790, 360, "random");
	float **C = create_two_dim_float(650, 500, "random");
	float **A = create_two_dim_float(490, 180, "random");

	for (int a = 0; a < 486; a++)
	{
	  
	    C[a][a]=C[a][a+2]+A[a][a];
	  
	    A[a][a]=A[a][a+4]+B[a][a][a];
	  
	    B[a][a][a]=B[a+5][a+3][a]-0.884;
	}

    return 0;
}