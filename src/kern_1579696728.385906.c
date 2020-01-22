#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(80, 570, 310, "zeros");
	float ***B = create_three_dim_float(450, 510, 410, "zeros");
	float ***D = create_three_dim_float(800, 10, 220, "zeros");
	float **C = create_two_dim_float(80, 750, "zeros");
	float **A = create_two_dim_float(800, 370, "zeros");

	for (int a = 4; a < 78; a++)
	{
	  
	    A[a][a]=A[a-2][a-2]/B[a][a][a];
	  
	    A[a][a]=A[a-4][a-4]/0.952;
	  
	    D[a][a][a]=D[a+4][a+4][a]*E[a][a][a]+A[a][a];
	  
	    A[a][a]=A[a+1][a]+0.751;
	  
	    D[a][a][a]=D[a+5][a+5][a+2]+C[a][a]*A[a][a];
	  
	    E[a][a][a]=D[a][a][a];
	    E[a+1][a+1][a+2]=B[a][a][a]/C[a][a]+0.115;
	}

    return 0;
}