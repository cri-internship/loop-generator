#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(390, "ones");
	double *B = create_one_dim_double(680, "ones");

	for (int a = 0; a < 677; a++)
	{
	  
	    B[a]=0.784;
	    B[a+3]=A[a];
	}

    return 0;
}