#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(710, 810, 910, "zeros");
	double **B = create_two_dim_double(230, 700, "zeros");
	double ***C = create_three_dim_double(940, 520, 360, "zeros");

	for (int a = 5; a < 225; a++)
	{
	  
	    B[a][a]=B[a-1][a-2]/C[a][a][a]+A[a][a][a];
	  
	    C[a][a][a]=C[a+4][a+4][a+4]-0.908;
	  
	    B[a][a]=B[a+5][a+3]/C[a][a][a]+A[a][a][a];
	  
	    B[a][a]=C[a][a][a]*B[a][a];
	    C[a][a][a]=C[a-5][a-5][a-1]-A[a][a][a]/0.25;
	}

    return 0;
}