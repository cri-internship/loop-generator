#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 40, "zeros");
	double **A = create_two_dim_double(310, 670, "zeros");
	double ***C = create_three_dim_double(410, 60, 810, "zeros");

	for (int a = 5; a < 240; a++)
	{
	  
	    A[a][a]=A[a-5][a-2]-0.599;
	  
	    B[a][a]=A[a][a]+C[a][a][a];
	    B[a-2][a-1]=C[a][a][a]/A[a][a];
	  
	    A[a][a]=0.117;
	  
	    B[a][a]=0.992;
	  
	    C[a][a][a]=B[a][a];
	    C[a][a-5][a-5]=B[a][a];
	  
	    A[a][a]=A[a][a]*C[a][a][a]-B[a][a];
	    B[a][a]=A[a-4][a-3]+C[a][a][a];
	  
	    C[a][a][a]=C[a][a][a]/B[a][a]*A[a][a];
	    C[a][a][a]=C[a+1][a+2][a+4]-A[a][a];
	}

    return 0;
}