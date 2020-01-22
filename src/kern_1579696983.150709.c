#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(80, 280, "zeros");
	float ***A = create_three_dim_float(330, 670, 790, "zeros");

	for (int a = 5; a < 325; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+2][a]-B[a][a];
	  
	    A[a][a][a]=B[a][a];
	  
	    B[a][a]=A[a][a][a]+B[a][a];
	    A[a][a][a]=A[a][a-3][a-4]*B[a][a];
	}

    return 0;
}