#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(820, "zeros");
	int *B = create_one_dim_int(620, "zeros");

	for (int a = 0; a < 617; a++)
	{
	  
	    A[a]=B[a]*A[a];
	    B[a]=B[a+3]*A[a];
	}

    return 0;
}