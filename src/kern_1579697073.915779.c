#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(630, 420, "zeros");
	float ***B = create_three_dim_float(20, 210, 910, "zeros");
	float *A = create_one_dim_float(600, "zeros");

	for (int a = 3; a < 15; a++)
	{
	  
	    C[a][a]=C[a-3][a-2]*B[a][a][a];
	  
	    A[a]=A[a+4]/C[a][a]*C[a][a];
	  
	    B[a][a][a]=0.749;
	    B[a][a+2][a+2]=C[a][a]*A[a];
	  
	    B[a][a][a]=C[a][a]+A[a];
	  
	    C[a][a]=0.629;
	  
	    A[a]=C[a][a]*B[a][a][a];
	}

    return 0;
}