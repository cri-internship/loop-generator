#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(230, 540, 670, "random");
	double **A = create_two_dim_double(550, 850, "random");

	for (int a = 4; a < 225; a++)
	{
	  
	    B[a][a][a]=B[a][a-4][a-1]/A[a][a];
	  
	    A[a][a]=A[a][a+3]*B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+2][a+3]-A[a][a];
	  
	    A[a][a]=A[a+3][a+2]/0.777;
	  
	    B[a][a][a]=B[a][a][a]/A[a][a];
	    A[a][a]=B[a-2][a-3][a-1]/A[a][a];
	}

    return 0;
}