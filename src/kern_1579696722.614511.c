#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(90, 640, 440, "ones");
	float **A = create_two_dim_float(310, 750, "ones");
	float ***D = create_three_dim_float(340, 500, 670, "ones");
	float ***C = create_three_dim_float(620, 690, 430, "ones");

	for (int a = 5; a < 90; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]*0.726;
	  
	    D[a][a][a]=D[a-1][a-3][a-5]/0.026;
	  
	    A[a][a]=A[a][a-5]-0.442;
	  
	    B[a][a][a]=B[a-1][a-4][a]+A[a][a]/0.313;
	  
	    A[a][a]=A[a+5][a+3]*B[a][a][a]-D[a][a][a];
	  
	    D[a][a][a]=0.105;
	}

    return 0;
}