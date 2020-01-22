#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(410, "random");
	double *A = create_one_dim_double(240, "random");
	double *B = create_one_dim_double(220, "random");

	for (int c = 1; c < 238; c++)
	  for (int b = 1; b < 238; b++)
	    for (int a = 1; a < 238; a++)
	    {
	      
	      A[a]=A[a+2]*0.989;
	      
	      A[a]=C[a];
	      
	      double var_a=A[a]*0.832;
	    }

    return 0;
}