#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(360, "zeros");
	double **A = create_two_dim_double(760, 210, "zeros");

	for (int a = 0; a < 357; a++)
	{
	  
	    double var_a=B[a]-0.85;
	    double var_b=B[a+3]*0.821;
	}

    return 0;
}