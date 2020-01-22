#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(910, 860, 770, "zeros");
	float **A = create_two_dim_float(100, 890, "zeros");
	float **C = create_two_dim_float(430, 550, "zeros");

	for (int a = 5; a < 95; a++)
	{
	  
	    A[a][a]=A[a+4][a+5]/0.13;
	  
	    A[a][a]=C[a][a];
	  
	    B[a][a][a]=A[a][a]+A[a][a];
	    B[a-3][a-5][a-5]=A[a][a];
	  
	    B[a][a][a]=A[a][a]/B[a][a][a];
	    A[a][a]=A[a+3][a+5]+C[a][a];
	  
	    C[a][a]=A[a][a]+C[a][a]*B[a][a][a];
	    C[a][a]=A[a+2][a+3]*C[a][a]-B[a][a][a];
	}

    return 0;
}