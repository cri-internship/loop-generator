#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(700, 970, "ones");
	int *B = create_one_dim_int(810, "ones");

	for (int a = 4; a < 698; a++)
	{
	  
	    A[a][a]=A[a-4][a]/B[a];
	  
	    B[a]=B[a+1]+A[a][a];
	  
	    A[a][a]=A[a+2][a+1]-23;
	  
	    int var_a=B[a]+20;
	    int var_b=B[a-4]/7;
	  
	    A[a][a]=B[a]/A[a][a];
	}

    return 0;
}