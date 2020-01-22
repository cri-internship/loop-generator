#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(520, "random");
	int *C = create_one_dim_int(10, "random");
	int *A = create_one_dim_int(390, "random");

	for (int a = 5; a < 8; a++)
	{
	  
	    B[a]=B[a-5]/A[a]*C[a];
	  
	    A[a]=A[a+4]/31;
	  
	    A[a]=14;
	  
	    C[a]=B[a]*42;
	    C[a+2]=B[a];
	  
	    C[a]=A[a]+B[a];
	    A[a]=A[a-2]+C[a]-B[a];
	}

    return 0;
}