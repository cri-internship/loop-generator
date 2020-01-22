#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(780, "zeros");
	double ***A = create_three_dim_double(780, 1000, 800, "zeros");

	for (int a = 5; a < 775; a++)
	{
	  
	    B[a]=B[a-5]/A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]/B[a];
	    B[a]=A[a+1][a+5][a+5]*B[a];
	}

    return 0;
}