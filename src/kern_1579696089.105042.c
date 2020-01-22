#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(140, 60, "random");
	int *B = create_one_dim_int(260, "random");
	int *C = create_one_dim_int(600, "random");

	for (int a = 5; a < 140; a++)
	{
	  
	    C[a]=C[a-3]*18;
	  
	    A[a][a]=A[a-4][a-4]+37*B[a];
	  
	    B[a]=B[a-4]/47;
	  
	    C[a]=C[a-5]-12;
	  
	    A[a][a]=A[a-3][a-4]-C[a]*B[a];
	}

    return 0;
}