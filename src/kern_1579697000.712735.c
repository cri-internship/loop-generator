#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(200, "ones");

	for (int a = 5; a < 195; a++)
	{
	  
	    A[a]=A[a-5]-0.849;
	  
	    A[a]=0.042;
	}

    return 0;
}