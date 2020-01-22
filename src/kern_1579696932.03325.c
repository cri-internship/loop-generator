#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(650, "ones");
	double *B = create_one_dim_double(470, "ones");

	for (int c = 0; c < 466; c++)
	  for (int b = 0; b < 466; b++)
	    for (int a = 0; a < 466; a++)
	    {
	      
	      A[a]=B[a]*A[a];
	      B[a]=B[a+4]+A[a];
	      
	      double var_a=B[a]/0.395;
	      double var_b=B[a+1]-0.015;
	    }

    return 0;
}