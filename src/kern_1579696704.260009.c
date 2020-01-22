#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(890, "zeros");
	double *A = create_one_dim_double(420, "zeros");

	for (int a = 0; a < 417; a++)
	{
	  
	    A[a]=A[a+3]/0.633;
	  
	    double var_a=A[a]/0.261;
	    double var_b=A[a+1]/0.265;
	}

    return 0;
}