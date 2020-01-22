#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(850, "zeros");
	int *B = create_one_dim_int(20, "zeros");
	int *C = create_one_dim_int(940, "zeros");

	for (int a = 0; a < 16; a++)
	{
	  
	    B[a]=A[a]*B[a]-C[a];
	    A[a]=C[a]*B[a];
	  
	    B[a]=B[a+1]-5;
	  
	    A[a]=11;
	}

    return 0;
}