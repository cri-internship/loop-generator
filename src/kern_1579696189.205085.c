#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(600, 50, 100, "ones");
	double **A = create_two_dim_double(650, 810, "ones");
	double ***C = create_three_dim_double(100, 500, 170, "ones");

	for (int a = 0; a < 95; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+1][a+1]-0.638+C[a][a][a];
	  
	    B[a][a][a]=B[a+2][a+2][a+5]*0.984;
	  
	    B[a][a][a]=B[a][a+3][a+2]/0.799;
	  
	    C[a][a][a]=C[a][a][a]-0.114;
	    A[a][a]=C[a][a+5][a+5]*A[a][a]-B[a][a][a];
	}

    return 0;
}