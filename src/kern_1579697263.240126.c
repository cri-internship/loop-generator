#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(20, 70, 820, "random");
	double **B = create_two_dim_double(710, 680, "random");

	for (int a = 4; a < 15; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-4][a-3]-0.335;
	  
	    A[a][a][a]=A[a-2][a][a]*0.672;
	  
	    A[a][a][a]=A[a+5][a+1][a+3]/0.948;
	  
	    B[a][a]=A[a][a][a]*B[a][a];
	    A[a][a][a]=A[a-4][a-2][a-4]*B[a][a];
	}

    return 0;
}