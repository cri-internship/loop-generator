#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(850, 930, 230, "zeros");
	double *A = create_one_dim_double(770, "zeros");
	double ***B = create_three_dim_double(480, 30, 670, "zeros");
	double ***D = create_three_dim_double(990, 440, 380, "zeros");

	for (int a = 0; a < 767; a++)
	{
	  
	    A[a]=A[a+3]+C[a][a][a]-B[a][a][a]*D[a][a][a];
	  
	    D[a][a][a]=0.703;
	    D[a+4][a+5][a+2]=0.443;
	  
	    B[a][a][a]=D[a][a][a]-0.212;
	    A[a]=D[a+5][a][a+2]+0.056;
	}

    return 0;
}