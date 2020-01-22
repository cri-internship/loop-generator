#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(10, "zeros");
	int *A = create_one_dim_int(40, "zeros");

	for (int a = 4; a < 6; a++)
	{
	  
	    B[a]=11;
	    B[a+4]=5;
	  
	    B[a]=B[a]*A[a];
	    A[a]=B[a-1]/A[a];
	  
	    A[a]=A[a]*2;
	    B[a]=A[a-4]*B[a];
	}

    return 0;
}