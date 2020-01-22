#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(640, 660, "zeros");
	double **A = create_two_dim_double(880, 130, "zeros");

	for (int a = 5; a < 880; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]*0.1;
	  
	    double var_a=A[a][a]/0.049;
	    double var_b=A[a-4][a-1]-0.655;
	}

    return 0;
}