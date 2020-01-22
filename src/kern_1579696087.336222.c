#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(540, 680, "zeros");
	float ***A = create_three_dim_float(120, 620, 100, "zeros");

	for (int a = 5; a < 120; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-1][a-2]/0.167;
	  
	    B[a][a]=B[a][a]+A[a][a][a];
	    A[a][a][a]=B[a][a-3]+A[a][a][a];
	}

    return 0;
}