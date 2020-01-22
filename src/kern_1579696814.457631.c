#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(630, 130, "zeros");
	double **A = create_two_dim_double(170, 500, "zeros");

	for (int a = 0; a < 626; a++)
	{
	  
	    B[a][a]=B[a+3][a+4]+0.621;
	  
	    B[a][a]=A[a][a];
	}

    return 0;
}