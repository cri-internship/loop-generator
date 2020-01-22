#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(70, "ones");

	for (int a = 0; a < 66; a++)
	{
	  
	    A[a]=A[a+4]-0.721;
	  
	    A[a]=0.617;
	}

    return 0;
}