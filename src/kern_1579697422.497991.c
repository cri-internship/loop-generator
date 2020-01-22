#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(990, "random");
	int *A = create_one_dim_int(170, "random");
	int *B = create_one_dim_int(860, "random");

	for (int a = 4; a < 170; a++)
	{
	  
	    C[a]=C[a-4]/B[a];
	  
	    A[a]=C[a]*B[a]+A[a];
	  
	    C[a]=C[a+5]*B[a]/41;
	  
	    A[a]=14;
	}

    return 0;
}