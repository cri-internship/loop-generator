#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(180, "zeros");
	int *B = create_one_dim_int(830, "zeros");

	for (int a = 3; a < 176; a++)
	{
	  
	    A[a]=A[a-2]+29;
	  
	    A[a]=A[a+4]/23;
	  
	    B[a]=A[a];
	    B[a+1]=A[a];
	  
	    B[a]=A[a];
	}

    return 0;
}