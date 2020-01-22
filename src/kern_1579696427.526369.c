#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(850, 590, "random");
	int *A = create_one_dim_int(790, "random");

	for (int a = 5; a < 788; a++)
	{
	  
	    A[a]=A[a-5]+B[a][a];
	  
	    B[a][a]=B[a-3][a]+0;
	  
	    B[a][a]=B[a][a+4]-43;
	  
	    B[a][a]=B[a+1][a+2]+29;
	  
	    A[a]=22;
	  
	    int var_a=B[a][a]-9;
	    int var_b=B[a-4][a-1]+35;
	  
	    A[a]=A[a]+B[a][a];
	    B[a][a]=A[a+2]-B[a][a];
	}

    return 0;
}