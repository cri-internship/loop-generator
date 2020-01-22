#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(800, 890, 830, "zeros");
	float **B = create_two_dim_float(480, 70, "zeros");

	for (int a = 5; a < 475; a++)
	{
	  
	    B[a][a]=B[a+4][a+5]+0.811;
	  
	    A[a][a][a]=0.291;
	    A[a-5][a-2][a-5]=B[a][a];
	  
	    B[a][a]=A[a][a][a]*B[a][a];
	    A[a][a][a]=A[a-3][a-2][a]/B[a][a];
	  
	    B[a][a]=A[a][a][a]+B[a][a];
	    A[a][a][a]=A[a+1][a+5][a]/B[a][a];
	}

    return 0;
}