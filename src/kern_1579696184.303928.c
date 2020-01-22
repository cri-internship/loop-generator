#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(130, 160, "random");
	double **C = create_two_dim_double(830, 430, "random");
	double **B = create_two_dim_double(790, 130, "random");
	double **D = create_two_dim_double(280, 880, "random");

	for (int a = 5; a < 125; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]*C[a][a]+D[a][a];
	  
	    D[a][a]=D[a+4][a+3]/0.146;
	  
	    A[a][a]=A[a+1][a+5]-B[a][a]+C[a][a];
	  
	    A[a][a]=A[a+3][a+3]/0.286;
	  
	    A[a][a]=A[a][a+5]+B[a][a]/0.57-C[a][a];
	  
	    D[a][a]=D[a+4][a+2]-0.311;
	}

    return 0;
}