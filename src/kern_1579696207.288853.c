#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(60, "ones");
	int **B = create_two_dim_int(810, 340, "ones");
	int ***C = create_three_dim_int(730, 170, 410, "ones");

	for (int a = 4; a < 57; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-4][a]/25;
	  
	    A[a]=A[a-1]-32;
	  
	    A[a]=A[a+3]-C[a][a][a];
	  
	    C[a][a][a]=A[a];
	}

    return 0;
}