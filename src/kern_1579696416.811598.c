#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(210, "zeros");
	int *A = create_one_dim_int(530, "zeros");

	for (int a = 3; a < 530; a++)
	{
	  
	    A[a]=19;
	    A[a-3]=33;
	}

    return 0;
}