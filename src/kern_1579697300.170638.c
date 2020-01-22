#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(540, 660, "ones");
	double **A = create_two_dim_double(680, 360, "ones");

	for (int a = 5; a < 540; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]*0.171;
	  
	    A[a][a]=B[a][a];
	  
	    B[a][a]=0.672;
	    B[a-2][a]=0.286;
	}

    return 0;
}