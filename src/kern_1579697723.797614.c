#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(480, 660, "zeros");
	float ***C = create_three_dim_float(420, 90, 260, "zeros");
	float *B = create_one_dim_float(60, "zeros");

	for (int a = 5; a < 60; a++)
	{
	  
	    C[a][a][a]=C[a][a][a+1]-0.477;
	  
	    C[a][a][a]=C[a+5][a+2][a+2]/0.477;
	  
	    C[a][a][a]=C[a+1][a+5][a+4]/0.092;
	  
	    A[a][a]=B[a]-C[a][a][a];
	    A[a-4][a-5]=B[a]*C[a][a][a];
	  
	    A[a][a]=B[a];
	}

    return 0;
}