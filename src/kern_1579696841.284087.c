#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(270, "ones");
	double ***B = create_three_dim_double(840, 140, 620, "ones");

	for (int a = 0; a < 269; a++)
	{
	  
	    B[a][a][a]=B[a+4][a][a+3]/0.134;
	  
	    A[a]=A[a+1]+0.169;
	  
	    A[a]=B[a][a][a];
	}

    return 0;
}