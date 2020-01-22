#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(730, 710, 970, "random");
	float **A = create_two_dim_float(900, 990, "random");

	for (int a = 3; a < 725; a++)
	{
	  
	    A[a][a]=A[a-3][a-1]*0.899;
	  
	    B[a][a][a]=B[a+5][a+3][a+1]+0.219;
	  
	    A[a][a]=0.769;
	  
	    A[a][a]=A[a][a]*B[a][a][a];
	    B[a][a][a]=A[a+1][a+1]/B[a][a][a];
	}

    return 0;
}