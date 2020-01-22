#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(410, "zeros");
	int *C = create_one_dim_int(870, "zeros");
	int *D = create_one_dim_int(270, "zeros");
	int *A = create_one_dim_int(950, "zeros");

	for (int a = 4; a < 409; a++)
	{
	  
	    A[a]=A[a-3]*42;
	  
	    A[a]=A[a-2]/12;
	  
	    C[a]=C[a-4]/A[a]*D[a];
	  
	    C[a]=C[a-3]-34;
	  
	    int var_a=B[a]/9;
	    int var_b=B[a+1]-3;
	}

    return 0;
}