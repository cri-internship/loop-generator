#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(80, "ones");
	float **A = create_two_dim_float(880, 340, "ones");
	float ***B = create_three_dim_float(900, 710, 410, "ones");

	for (int a = 3; a < 80; a++)
	{
	  
	    C[a]=C[a-3]+B[a][a][a]-A[a][a];
	  
	    B[a][a][a]=C[a]+B[a][a][a]-A[a][a];
	    A[a][a]=C[a]-A[a][a];
	  
	    C[a]=A[a][a]+0.935*B[a][a][a];
	    B[a][a][a]=A[a+2][a+1]+0.484;
	}

    return 0;
}