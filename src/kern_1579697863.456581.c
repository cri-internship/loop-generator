#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(810, 610, "zeros");
	double ***A = create_three_dim_double(590, 380, 10, "zeros");
	double ***C = create_three_dim_double(140, 230, 60, "zeros");

	for (int a = 5; a < 589; a++)
	{
	  
	    A[a][a][a]=A[a-1][a][a]-B[a][a]*C[a][a][a];
	  
	    A[a][a][a]=A[a-5][a-4][a]*C[a][a][a]-B[a][a];
	  
	    B[a][a]=0.6;
	    B[a-3][a-2]=0.486;
	  
	    B[a][a]=A[a][a][a]-C[a][a][a];
	    C[a][a][a]=A[a][a+1][a+1]+B[a][a];
	}

    return 0;
}