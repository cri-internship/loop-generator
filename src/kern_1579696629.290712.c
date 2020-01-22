#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(590, 30, "ones");
	double ***A = create_three_dim_double(680, 180, 590, "ones");

	for (int a = 5; a < 585; a++)
	{
	  
	    A[a][a][a]=B[a][a];
	    A[a-2][a-5][a]=0.236;
	  
	    A[a][a][a]=A[a][a][a]-0.083;
	    B[a][a]=A[a+2][a+2][a+3]*B[a][a];
	  
	    B[a][a]=B[a][a]+0.746;
	    B[a][a]=B[a+5][a]*A[a][a][a];
	}

    return 0;
}