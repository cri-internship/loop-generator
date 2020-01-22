#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(610, "zeros");

	for (int a = 5; a < 605; a++)
	{
	  
	    A[a]=A[a-2]/0.003;
	  
	    A[a]=A[a+5]*0.838;
	  
	    A[a]=A[a+2]+0.537;
	}

    return 0;
}