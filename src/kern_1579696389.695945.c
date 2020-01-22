#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(820, "zeros");
	double **A = create_two_dim_double(380, 330, "zeros");

	for (int a = 5; a < 817; a++)
	{
	  
	    B[a]=B[a-5]/0.21;
	  
	    B[a]=B[a+2]/A[a][a];
	  
	    double var_a=B[a]/0.543;
	    double var_b=B[a+3]*0.609;
	}

    return 0;
}