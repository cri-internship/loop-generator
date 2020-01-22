#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(340, "zeros");

	for (int a = 1; a < 337; a++)
	{
	  
	    A[a]=A[a+3]*10;
	  
	    A[a]=4;
	  
	    int var_a=A[a]/8;
	    int var_b=A[a]+0;
	}

    return 0;
}