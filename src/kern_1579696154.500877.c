#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(820, 380, 320, "zeros");
	float ***C = create_three_dim_float(480, 30, 940, "zeros");
	float ***B = create_three_dim_float(760, 260, 710, "zeros");
	float **A = create_two_dim_float(850, 730, "zeros");

	for (int a = 4; a < 480; a++)
	{
	  
	    D[a][a][a]=D[a-1][a-3][a-2]*0.004;
	  
	    B[a][a][a]=B[a][a-2][a]-A[a][a]/D[a][a][a];
	  
	    A[a][a]=0.336;
	    A[a-3][a-3]=0.617;
	  
	    B[a][a][a]=0.227;
	  
	    C[a][a][a]=0.223;
	    C[a][a-4][a]=0.16;
	  
	    B[a][a][a]=A[a][a]/B[a][a][a];
	    D[a][a][a]=A[a+1][a+3]*C[a][a][a]+0.539;
	}

    return 0;
}