#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(140, 880, 200, "ones");
	float **A = create_two_dim_float(430, 220, "ones");
	float ***C = create_three_dim_float(580, 860, 140, "ones");
	float ***B = create_three_dim_float(330, 30, 740, "ones");
	float ***D = create_three_dim_float(300, 180, 240, "ones");

	for (int a = 4; a < 295; a++)
	{
	  
	    A[a][a]=A[a-1][a-3]*E[a][a][a]-B[a][a][a]/D[a][a][a]+C[a][a][a];
	  
	    D[a][a][a]=D[a-2][a-1][a-4]-0.682;
	  
	    D[a][a][a]=D[a+4][a+3][a+1]/A[a][a]-C[a][a][a];
	  
	    B[a][a][a]=D[a][a][a]*C[a][a][a]-A[a][a]/E[a][a][a]+B[a][a][a];
	  
	    E[a][a][a]=D[a][a][a]-A[a][a]+E[a][a][a];
	    A[a][a]=D[a+4][a+1][a+5]-B[a][a][a]/A[a][a];
	}

    return 0;
}