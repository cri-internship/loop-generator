#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(860, "random");
	int **B = create_two_dim_int(800, 220, "random");

	for (int a = 5; a < 797; a++)
	{
	  
	    B[a][a]=B[a-1][a-5]+24;
	  
	    A[a]=A[a+2]*22;
	  
	    B[a][a]=A[a];
	  
	    A[a]=B[a][a]/A[a];
	    B[a][a]=B[a][a-3]-A[a];
	  
	    int var_a=A[a]+29;
	    int var_b=A[a-4]-4;
	}

    return 0;
}