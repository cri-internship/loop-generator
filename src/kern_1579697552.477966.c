#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(890, "zeros");
	int *B = create_one_dim_int(130, "zeros");

	for (int a = 4; a < 130; a++)
	{
	  
	    A[a]=B[a];
	    B[a]=A[a]/5;
	  
	    A[a]=B[a]-0;
	    A[a]=B[a-4]*30;
	}

    return 0;
}