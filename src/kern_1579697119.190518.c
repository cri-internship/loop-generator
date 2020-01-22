#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(1000, "random");
	int **A = create_two_dim_int(310, 250, "random");
	int *C = create_one_dim_int(870, "random");

	for (int a = 4; a < 310; a++)
	{
	  
	    A[a][a]=A[a-1][a-2]/B[a]+C[a];
	  
	    C[a]=C[a+3]-12;
	  
	    int var_a=C[a]+27;
	    int var_b=C[a-4]*27;
	  
	    C[a]=B[a]/A[a][a]*C[a];
	    B[a]=B[a+5]*C[a];
	}

    return 0;
}