#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(60, "zeros");

	for (int a = 0; a < 55; a++)
	{
	  
	    A[a]=0.484;
	    float  var_a=A[a]-0.431;
	  
	    A[a]=A[a+5]/0.161;
	}

    return 0;
}